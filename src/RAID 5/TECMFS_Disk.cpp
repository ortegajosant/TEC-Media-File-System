//
// Created by christian on 24/11/18.
//

#include "TECMFS_Disk.h"

bool TECMFS_Disk::sendData() {
    return false;
}

bool TECMFS_Disk::saveData(string info, string name, int disk) {
    switch (disk) {
        case 0:
            disk0.writeData(info, name);
            return true;
        case 1:
            disk1.writeData(info, name);
            return true;
        case 2:
            disk2.writeData(info, name);
            return true;
        case 3:
            disk3.writeData(info, name);
            return true;
        default:
            return false;
    }
}

TECMFS_Disk::TECMFS_Disk() {

    disk0 = DiskNode("../DiskNodes/Disk0", 1073741824);
    disk1 = DiskNode("../DiskNodes/Disk1", 1073741824);
    disk2 = DiskNode("../DiskNodes/Disk2", 1073741824);
    disk3 = DiskNode("../DiskNodes/Disk3", 1073741824);

}

long TECMFS_Disk::getDiskSize(int disk) {
    switch (disk) {
        case 0:
            return disk0.freeData();
        case 1:
            return disk1.freeData();
        case 2:
            return disk2.freeData();
        case 3:
            return disk3.freeData();
        default:
            return 0;
    }
}

string TECMFS_Disk::readData(string name, int disk) {
    switch (disk) {
        case 0:
            return disk0.readData(name);
        case 1:
            return disk1.readData(name);
        case 2:
            return disk2.readData(name);
        case 3:
            return disk3.readData(name);
        default:
            return "Empty";
    }
}


