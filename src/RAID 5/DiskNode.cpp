//
// Created by christian on 24/11/18.
//

#include <dirent.h>
#include <iostream>
#include <fstream>
#include "DiskNode.h"
#include "Estructuras/ListaDoble.h"

/**
 * Escribe un string en el disco. Toma el path desde TECMFS-Disk
 * @param stringToWirte string para escribri en el disco
 * @param name nombre del archivo a escribir
 *          con extencion del tipo de archivo(.txt)
 * @return  true cuando fue escrito con exito
 */
bool DiskNode::writeData(string stringToWirte, string name) {
    ofstream file;
    file.open(this->path + "/" + name, ios::binary | ios::out);
    file.write(stringToWirte.c_str(), stringToWirte.length());
    file.close();
    return true;
}

/**
 * Lee un archivo (Block) del disco indiando el
 * nombre con la extencion del tipo de archivo
 * @param name nombre del achivo (block) con la extencion
 * @return string con la cadena de texto que contenia el archivo
 */
string DiskNode::readData(string name) {
    long size;
    ifstream file;
    file.open(this->path + "/" + name, ios::binary | ios::in);
    if (file.is_open()) {
        /// Obtener el largo del archivo7
        file.seekg(0, ios::end);
        size = (long) file.tellg();
        file.seekg(0, ios::beg);
        /// Leer el archivo
        char *buffer = new char[size];
        file.seekg(0, ios::beg);
        file.read(buffer, size);
        file.close();
        /// Convierto en String la lectura
        string temp;
        for (int i = 0; i < size; ++i) {
            temp += buffer[i];
        }
        free(buffer);
        return temp;
    } else {
        cout << "empty file" << endl;
    }
    return "empty file";
}

/**
 * Crea el directorio (carpeta) del disco
 * @param path Ubicacion donde estara el disco
 * @return true si el direcotrio fue creado o ya existia
 */
bool DiskNode::createDir() {
    DIR *dirp;
    struct dirent *direntp;
    /// Abrimos el directorio
    if ((dirp = opendir(this->path.c_str())) == NULL) {
        system(("mkdir " + this->path).c_str());
        return true;
    }
    cout << "El directorio ya existe\n";
    closedir(dirp);
    return true;
}

/**
 * Lee todo lo que hay en la ubicacion del disco,
 * toma el path del TECMFS-Disk
 *
 * @return  Lista con los que contenia la ubicacion
 */
List<string> DiskNode::readDir() {
    DIR *dir;
    dirent *ent;
    List<string> lista;
    if (DIR *dir = opendir(this->path.c_str())) {
        while (dirent *ent = readdir(dir)) {
            lista.add(ent->d_name);
        }
        closedir(dir);
    }
    return lista;
}

DiskNode::DiskNode() {

}

DiskNode::DiskNode(string path, long maxStorage) {
    this->path = path;
    this->maxStroge = maxStorage;
    this->createDir();
}

long DiskNode::freeData() {
    return maxStroge - currentStorage;
}
