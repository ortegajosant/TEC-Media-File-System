//
// Created by christian on 24/11/18.
//

#include "TECMFS_Disk.h"

TECMFS_Disk::TECMFS_Disk(string path, int puerto, string ip) {
    this->path = path;
    this->ip = ip;
    this->puerto = puerto;
}

bool TECMFS_Disk::sendData() {
    return false;
}

bool TECMFS_Disk::startDiskNode() {
    return false;
}

int TECMFS_Disk::getSize() {
    return 0;
}

bool TECMFS_Disk::setPath(string path) {
   this->path = path;
}

std::string TECMFS_Disk::getPath() {
    return  this->path;
}

TECMFS_Disk::TECMFS_Disk() {}
