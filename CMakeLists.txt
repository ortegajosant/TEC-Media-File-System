cmake_minimum_required(VERSION 3.12)
project(RAID_5)

set(CMAKE_CXX_STANDARD 14)

include_directories(lib/include/rapidjson)

add_executable(RAID_5 "main.cpp" "src/ControllerNode/ControllerServer.cpp" "src/ControllerNode/JSONHandler.cpp" "src/ControllerNode/JSONHandler.h" "src/ControllerNode/RequestManager.cpp" "src/ControllerNode/RequestManager.h" "src/ControllerNode/ControllerServer.h" "src/RAID 5/DiskNode.cpp" "src/RAID 5/DiskNode.h" "src/RAID 5/TECMFS_Disk.cpp" "src/RAID 5/TECMFS_Disk.h" "src/RAID 5/Estructuras/ListaDoble.h" "src/RAID 5/Raid5Handler.cpp" "src/RAID 5/Raid5Handler.h")