//
// Created by christian on 24/11/18.
//

#ifndef RAID_5_TECMFS_DISK_H
#define RAID_5_TECMFS_DISK_H

#include <string>

using namespace std;
class TECMFS_Disk {

private:
    string path , ip;
    int puerto = 0;

public:
    TECMFS_Disk(string path, int puerto, string ip);
    TECMFS_Disk();
    bool sendData();
    bool startDiskNode();
    int getSize();
    bool setPath(string path);
    std::string getPath();

};
#endif //RAID_5_TECMFS_DISK_H
