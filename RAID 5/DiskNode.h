//
// Created by christian on 24/11/18.
//

#ifndef RAID_5_DISKNODE_H
#define RAID_5_DISKNODE_H

#include "TECMFS_Disk.h"
#include "Estructuras/ListaDoble.h"

class DiskNode {

private:
    // Json map
    TECMFS_Disk handler;
    long maxStroge;

public:
    /// Archivos del directorio
    bool writeData(string stringToWirte, string name);
    string readData(string name);
    /// Directorio
    bool createDir();
    List<string> readDir();
    DiskNode(string path);
};


#endif //RAID_5_DISKNODE_H
