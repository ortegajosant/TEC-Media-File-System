# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/49/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/49/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/RAID_5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RAID_5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RAID_5.dir/flags.make

CMakeFiles/RAID_5.dir/main.cpp.o: CMakeFiles/RAID_5.dir/flags.make
CMakeFiles/RAID_5.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RAID_5.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RAID_5.dir/main.cpp.o -c "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/main.cpp"

CMakeFiles/RAID_5.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RAID_5.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/main.cpp" > CMakeFiles/RAID_5.dir/main.cpp.i

CMakeFiles/RAID_5.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RAID_5.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/main.cpp" -o CMakeFiles/RAID_5.dir/main.cpp.s

CMakeFiles/RAID_5.dir/src/ControllerNode/ControllerServer.cpp.o: CMakeFiles/RAID_5.dir/flags.make
CMakeFiles/RAID_5.dir/src/ControllerNode/ControllerServer.cpp.o: ../src/ControllerNode/ControllerServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/RAID_5.dir/src/ControllerNode/ControllerServer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RAID_5.dir/src/ControllerNode/ControllerServer.cpp.o -c "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/src/ControllerNode/ControllerServer.cpp"

CMakeFiles/RAID_5.dir/src/ControllerNode/ControllerServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RAID_5.dir/src/ControllerNode/ControllerServer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/src/ControllerNode/ControllerServer.cpp" > CMakeFiles/RAID_5.dir/src/ControllerNode/ControllerServer.cpp.i

CMakeFiles/RAID_5.dir/src/ControllerNode/ControllerServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RAID_5.dir/src/ControllerNode/ControllerServer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/src/ControllerNode/ControllerServer.cpp" -o CMakeFiles/RAID_5.dir/src/ControllerNode/ControllerServer.cpp.s

CMakeFiles/RAID_5.dir/src/ControllerNode/JSONHandler.cpp.o: CMakeFiles/RAID_5.dir/flags.make
CMakeFiles/RAID_5.dir/src/ControllerNode/JSONHandler.cpp.o: ../src/ControllerNode/JSONHandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/RAID_5.dir/src/ControllerNode/JSONHandler.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RAID_5.dir/src/ControllerNode/JSONHandler.cpp.o -c "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/src/ControllerNode/JSONHandler.cpp"

CMakeFiles/RAID_5.dir/src/ControllerNode/JSONHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RAID_5.dir/src/ControllerNode/JSONHandler.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/src/ControllerNode/JSONHandler.cpp" > CMakeFiles/RAID_5.dir/src/ControllerNode/JSONHandler.cpp.i

CMakeFiles/RAID_5.dir/src/ControllerNode/JSONHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RAID_5.dir/src/ControllerNode/JSONHandler.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/src/ControllerNode/JSONHandler.cpp" -o CMakeFiles/RAID_5.dir/src/ControllerNode/JSONHandler.cpp.s

CMakeFiles/RAID_5.dir/src/ControllerNode/RequestManager.cpp.o: CMakeFiles/RAID_5.dir/flags.make
CMakeFiles/RAID_5.dir/src/ControllerNode/RequestManager.cpp.o: ../src/ControllerNode/RequestManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/RAID_5.dir/src/ControllerNode/RequestManager.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RAID_5.dir/src/ControllerNode/RequestManager.cpp.o -c "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/src/ControllerNode/RequestManager.cpp"

CMakeFiles/RAID_5.dir/src/ControllerNode/RequestManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RAID_5.dir/src/ControllerNode/RequestManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/src/ControllerNode/RequestManager.cpp" > CMakeFiles/RAID_5.dir/src/ControllerNode/RequestManager.cpp.i

CMakeFiles/RAID_5.dir/src/ControllerNode/RequestManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RAID_5.dir/src/ControllerNode/RequestManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/src/ControllerNode/RequestManager.cpp" -o CMakeFiles/RAID_5.dir/src/ControllerNode/RequestManager.cpp.s

CMakeFiles/RAID_5.dir/src/RAID_5/DiskNode.cpp.o: CMakeFiles/RAID_5.dir/flags.make
CMakeFiles/RAID_5.dir/src/RAID_5/DiskNode.cpp.o: ../src/RAID\ 5/DiskNode.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/RAID_5.dir/src/RAID_5/DiskNode.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RAID_5.dir/src/RAID_5/DiskNode.cpp.o -c "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/src/RAID 5/DiskNode.cpp"

CMakeFiles/RAID_5.dir/src/RAID_5/DiskNode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RAID_5.dir/src/RAID_5/DiskNode.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/src/RAID 5/DiskNode.cpp" > CMakeFiles/RAID_5.dir/src/RAID_5/DiskNode.cpp.i

CMakeFiles/RAID_5.dir/src/RAID_5/DiskNode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RAID_5.dir/src/RAID_5/DiskNode.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/src/RAID 5/DiskNode.cpp" -o CMakeFiles/RAID_5.dir/src/RAID_5/DiskNode.cpp.s

CMakeFiles/RAID_5.dir/src/RAID_5/TECMFS_Disk.cpp.o: CMakeFiles/RAID_5.dir/flags.make
CMakeFiles/RAID_5.dir/src/RAID_5/TECMFS_Disk.cpp.o: ../src/RAID\ 5/TECMFS_Disk.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/RAID_5.dir/src/RAID_5/TECMFS_Disk.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RAID_5.dir/src/RAID_5/TECMFS_Disk.cpp.o -c "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/src/RAID 5/TECMFS_Disk.cpp"

CMakeFiles/RAID_5.dir/src/RAID_5/TECMFS_Disk.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RAID_5.dir/src/RAID_5/TECMFS_Disk.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/src/RAID 5/TECMFS_Disk.cpp" > CMakeFiles/RAID_5.dir/src/RAID_5/TECMFS_Disk.cpp.i

CMakeFiles/RAID_5.dir/src/RAID_5/TECMFS_Disk.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RAID_5.dir/src/RAID_5/TECMFS_Disk.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/src/RAID 5/TECMFS_Disk.cpp" -o CMakeFiles/RAID_5.dir/src/RAID_5/TECMFS_Disk.cpp.s

CMakeFiles/RAID_5.dir/src/RAID_5/Raid5Handler.cpp.o: CMakeFiles/RAID_5.dir/flags.make
CMakeFiles/RAID_5.dir/src/RAID_5/Raid5Handler.cpp.o: ../src/RAID\ 5/Raid5Handler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/RAID_5.dir/src/RAID_5/Raid5Handler.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RAID_5.dir/src/RAID_5/Raid5Handler.cpp.o -c "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/src/RAID 5/Raid5Handler.cpp"

CMakeFiles/RAID_5.dir/src/RAID_5/Raid5Handler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RAID_5.dir/src/RAID_5/Raid5Handler.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/src/RAID 5/Raid5Handler.cpp" > CMakeFiles/RAID_5.dir/src/RAID_5/Raid5Handler.cpp.i

CMakeFiles/RAID_5.dir/src/RAID_5/Raid5Handler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RAID_5.dir/src/RAID_5/Raid5Handler.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/src/RAID 5/Raid5Handler.cpp" -o CMakeFiles/RAID_5.dir/src/RAID_5/Raid5Handler.cpp.s

# Object files for target RAID_5
RAID_5_OBJECTS = \
"CMakeFiles/RAID_5.dir/main.cpp.o" \
"CMakeFiles/RAID_5.dir/src/ControllerNode/ControllerServer.cpp.o" \
"CMakeFiles/RAID_5.dir/src/ControllerNode/JSONHandler.cpp.o" \
"CMakeFiles/RAID_5.dir/src/ControllerNode/RequestManager.cpp.o" \
"CMakeFiles/RAID_5.dir/src/RAID_5/DiskNode.cpp.o" \
"CMakeFiles/RAID_5.dir/src/RAID_5/TECMFS_Disk.cpp.o" \
"CMakeFiles/RAID_5.dir/src/RAID_5/Raid5Handler.cpp.o"

# External object files for target RAID_5
RAID_5_EXTERNAL_OBJECTS =

RAID_5: CMakeFiles/RAID_5.dir/main.cpp.o
RAID_5: CMakeFiles/RAID_5.dir/src/ControllerNode/ControllerServer.cpp.o
RAID_5: CMakeFiles/RAID_5.dir/src/ControllerNode/JSONHandler.cpp.o
RAID_5: CMakeFiles/RAID_5.dir/src/ControllerNode/RequestManager.cpp.o
RAID_5: CMakeFiles/RAID_5.dir/src/RAID_5/DiskNode.cpp.o
RAID_5: CMakeFiles/RAID_5.dir/src/RAID_5/TECMFS_Disk.cpp.o
RAID_5: CMakeFiles/RAID_5.dir/src/RAID_5/Raid5Handler.cpp.o
RAID_5: CMakeFiles/RAID_5.dir/build.make
RAID_5: CMakeFiles/RAID_5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable RAID_5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RAID_5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RAID_5.dir/build: RAID_5

.PHONY : CMakeFiles/RAID_5.dir/build

CMakeFiles/RAID_5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RAID_5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RAID_5.dir/clean

CMakeFiles/RAID_5.dir/depend:
	cd "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit" "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit" "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/cmake-build-debug" "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/cmake-build-debug" "/home/ortegajosant/Documentos/Algoritmos Extructuras datos Datos II/Proyecto III/ProyectoIIIGit/cmake-build-debug/CMakeFiles/RAID_5.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/RAID_5.dir/depend

