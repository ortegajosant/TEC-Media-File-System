//
// Created by christian on 24/11/18.
//

#ifndef RAID_5_DISKNODE_H
#define RAID_5_DISKNODE_H

#include "Estructuras/ListaDoble.h"

class DiskNode {

private:
    // Json map
    long maxStroge;
    long currentStorage;
    string path;

    bool createDir();

public:
    /// Archivos del directorio
    bool writeData(string stringToWirte, string name);

    string readData(string name);

    /// Directorio

    List<string> readDir();

    DiskNode(string path, long maxStorage);

    DiskNode();

    long freeData();
};

#endif //RAID_5_DISKNODE_H
