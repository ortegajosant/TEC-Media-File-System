//
// Created by ortegajosant on 24/11/18.
//

#include <unistd.h>
#include <iostream>
#include <fwd.h>
#include <filereadstream.h>
#include <stringbuffer.h>
#include <prettywriter.h>
#include "ControllerServer.h"
#include "JSONHandler.h"

using namespace std;

/**
 * Inicia el servidor
 * @return entero
 */
int ControllerServer::run() {

    this->direccionServidor.sin_family = AF_INET;
    this->direccionServidor.sin_addr.s_addr = INADDR_ANY;
    this->direccionServidor.sin_port = htons(5555);

    this->servidor = socket(AF_INET, SOCK_STREAM, 0);
    int activado = 1;
    setsockopt(servidor, SOL_SOCKET, SO_REUSEADDR, &activado, sizeof(activado));

    if (bind(servidor, (struct sockaddr *) &this->direccionServidor, sizeof(this->direccionServidor)) != 0) {
        perror("Falló el bind");
    }

    listen(servidor, 5);

    unsigned int tamanoDireccion;
    const int size = 1024;

    char *buffer = (char *) malloc(size);

    std::string respuestaFinal;

    ssize_t bytes = 0;

    bool isVideo = false;

    while (true) {
        cliente = accept(servidor, (struct sockaddr *) &direccionCliente, &tamanoDireccion);
        printf("Recibí el cliente: %d!!\n", cliente);
        bytes = recv(cliente, buffer, size, 0) <= 0;

        if (bytes < 0) {
            perror("Se desconectó el cliente\n");
            break;
        }
        printf("Recibí: %d con el mensaje: %s\n", (int) bytes, buffer);

        respuestaFinal = string(buffer);

        string respuesta = processRequest(respuestaFinal);

        send(cliente, respuesta.c_str(), respuesta.length(), 0);
        memset(buffer, 0, size - 1);
        close(cliente);
    }
    free(buffer);
}

string ControllerServer::processRequest(string jsonString) {
    Document jsonDoc = JSONHandler::stringToJson(jsonString);
    string opCode = jsonDoc["opCode"].GetString();
    if (opCode == "1") {
        string videoInfo = jsonDoc["video"].GetString();
        string name = jsonDoc["name"].GetString();
        saveData(videoInfo, name);
        return JSONHandler::saveAnswer();
    } else if (opCode == "2") {
        StringBuffer stringBuffer;
        PrettyWriter<StringBuffer> writer(stringBuffer);
        videoMetaData.Accept(writer);
        return stringBuffer.GetString();
    } else if (opCode == "3") {
        string name = jsonDoc["name"].GetString();
        string videoInfo = readData(name);
        string answer = JSONHandler::videoAnswer(videoInfo);
        return answer;
    }
    return "holax2";
}

bool ControllerServer::saveData(string videoInfo, string name) {
    long div = videoInfo.size() / 3;
    string part1 = videoInfo.substr(0, div);
    string part2 = videoInfo.substr(div, div);
    string part3 = videoInfo.substr(2 * div, videoInfo.size());
    string parity = raid5.parity(part1, part2, part3);

    diskNodesHandler.saveData(part1, name, 0);
    diskNodesHandler.saveData(part2, name, 1);
    diskNodesHandler.saveData(part3, name, 2);
    diskNodesHandler.saveData(parity, name, 3);

    return true;
}

string ControllerServer::readData(string videoName) {
    int lenght = 4, mistakes = 0;
    string parts[lenght];
    bool corruptedDisk[lenght];

    corruptedDisk[0] = false;
    corruptedDisk[1] = false;
    corruptedDisk[2] = false;
    corruptedDisk[3] = false;

    parts[0] = diskNodesHandler.readData(videoName, 0);
    parts[1] = diskNodesHandler.readData(videoName, 1);
    parts[2] = diskNodesHandler.readData(videoName, 2);
    parts[3] = diskNodesHandler.readData(videoName, 3);

    for (int i = 0; i < lenght; i++) {
        if (parts[i] == "empty file") {
            cout<< "holoolola"<<endl;

            corruptedDisk[i] = true;
            mistakes += 1;
        }
    }

    if (mistakes == 0) {
        return parts[0] + parts[1] + parts[2];
    } else if (mistakes == 1) {
        cout<< "holoolola"<<endl;
        int disk;
        for (int i = 0; i < lenght; i++) {
            if (corruptedDisk[i]) {
                disk = i;
                break;
            }
        }
        string repaired = repairCorruptedDisk(disk, parts[0], parts[1], parts[2], parts[3]);
        diskNodesHandler.saveData(repaired, videoName, disk);
        parts[disk] = repaired;
        return parts[0] + parts[1] + parts[2];
    } else {
        cout << "El error es grave" << endl;
        return "NO_DATA";
    }
}

string ControllerServer::repairCorruptedDisk(int disk, string disk0, string disk1, string disk2, string disk3) {

    switch (disk) {
        case 0:
            return raid5.parity(disk1, disk2, disk3);
        case 1:
            return raid5.parity(disk0, disk2, disk3);
        case 2:
            return raid5.parity(disk0, disk1, disk3);
        case 3:
            return raid5.parity(disk0, disk1, disk2);
        default:
            return "";
    }
}

void ControllerServer::loadMetaData() {
    FILE *fp = fopen("../resources/metaData.json", "rb");
    char readBuffer[65536];
    FileReadStream is(fp, readBuffer, sizeof(readBuffer));
    videoMetaData.ParseStream(is);
    fclose(fp);
}
