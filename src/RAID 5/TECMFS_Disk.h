//
// Created by christian on 24/11/18.
//

#ifndef RAID_5_TECMFS_DISK_H
#define RAID_5_TECMFS_DISK_H

#include <string>
#include "DiskNode.h"

using namespace std;
class TECMFS_Disk {

private:
    string path;

public:
    TECMFS_Disk();

    DiskNode disk0;
    DiskNode disk1;
    DiskNode disk2;
    DiskNode disk3;

    bool sendData();
    string readData(string name, int disk);
    bool saveData(string info, string name, int disk);
    long getDiskSize(int disk);

};
#endif //RAID_5_TECMFS_DISK_H
