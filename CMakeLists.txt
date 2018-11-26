cmake_minimum_required(VERSION 3.12)
project(RAID_5)

set(CMAKE_CXX_STANDARD 14)

add_executable(RAID_5 "RAID 5/main.cpp" "RAID 5/DiskNode.cpp" "RAID 5/DiskNode.h" "RAID 5/TECMFS_Disk.cpp" "RAID 5/TECMFS_Disk.h" "RAID 5/Estructuras/ListaDoble.h")