//
// Created by ortegajosant on 24/11/18.
//

#ifndef TEC_MFS_CONTROLLERSERVER_H
#define TEC_MFS_CONTROLLERSERVER_H

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <string>
#include <string.h>
#include <rapidjson.h>
#include "document.h"
#include "../RAID 5/TECMFS_Disk.h"
#include "../RAID 5/Raid5Handler.h"

using namespace std;
using namespace rapidjson;

/**
 * Server inicia el servidor al que se conecta MPointer
 */
class ControllerServer {

public:
    int run();
    string processRequest(string);
    bool saveData(string, string);
    string readData(string videoName);

private:
    Document videoMetaData;
    void loadMetaData();
    string repairCorruptedDisk(int disk, string disk0, string disk1, string disk2, string disk3);
    struct sockaddr_in direccionServidor;
    struct sockaddr_in direccionCliente;
    TECMFS_Disk diskNodesHandler;
    Raid5Handler raid5;
    int servidor;
    int cliente;
};



#endif //TEC_MFS_CONTROLLERSERVER_H
