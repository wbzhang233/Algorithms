# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\OPENCV\cmake-3.10.2-win64-x64\bin\cmake.exe

# The command to remove a file.
RM = D:\OPENCV\cmake-3.10.2-win64-x64\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Code\Algorithms

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Code\Algorithms\build

# Include any dependencies generated for this target.
include CMakeFiles/prim.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/prim.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/prim.dir/flags.make

CMakeFiles/prim.dir/14-Graph/prim.cpp.obj: CMakeFiles/prim.dir/flags.make
CMakeFiles/prim.dir/14-Graph/prim.cpp.obj: ../14-Graph/prim.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Code\Algorithms\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/prim.dir/14-Graph/prim.cpp.obj"
	cd /d D:\Code\Algorithms\build && D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\prim.dir\14-Graph\prim.cpp.obj -c D:\Code\Algorithms\14-Graph\prim.cpp

CMakeFiles/prim.dir/14-Graph/prim.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prim.dir/14-Graph/prim.cpp.i"
	cd /d D:\Code\Algorithms\build && D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Code\Algorithms\14-Graph\prim.cpp > CMakeFiles\prim.dir\14-Graph\prim.cpp.i

CMakeFiles/prim.dir/14-Graph/prim.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prim.dir/14-Graph/prim.cpp.s"
	cd /d D:\Code\Algorithms\build && D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Code\Algorithms\14-Graph\prim.cpp -o CMakeFiles\prim.dir\14-Graph\prim.cpp.s

CMakeFiles/prim.dir/14-Graph/prim.cpp.obj.requires:

.PHONY : CMakeFiles/prim.dir/14-Graph/prim.cpp.obj.requires

CMakeFiles/prim.dir/14-Graph/prim.cpp.obj.provides: CMakeFiles/prim.dir/14-Graph/prim.cpp.obj.requires
	$(MAKE) -f CMakeFiles\prim.dir\build.make CMakeFiles/prim.dir/14-Graph/prim.cpp.obj.provides.build
.PHONY : CMakeFiles/prim.dir/14-Graph/prim.cpp.obj.provides

CMakeFiles/prim.dir/14-Graph/prim.cpp.obj.provides.build: CMakeFiles/prim.dir/14-Graph/prim.cpp.obj


# Object files for target prim
prim_OBJECTS = \
"CMakeFiles/prim.dir/14-Graph/prim.cpp.obj"

# External object files for target prim
prim_EXTERNAL_OBJECTS =

prim.exe: CMakeFiles/prim.dir/14-Graph/prim.cpp.obj
prim.exe: CMakeFiles/prim.dir/build.make
prim.exe: CMakeFiles/prim.dir/linklibs.rsp
prim.exe: CMakeFiles/prim.dir/objects1.rsp
prim.exe: CMakeFiles/prim.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Code\Algorithms\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable prim.exe"
	cd /d D:\Code\Algorithms\build && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\prim.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/prim.dir/build: prim.exe

.PHONY : CMakeFiles/prim.dir/build

CMakeFiles/prim.dir/requires: CMakeFiles/prim.dir/14-Graph/prim.cpp.obj.requires

.PHONY : CMakeFiles/prim.dir/requires

CMakeFiles/prim.dir/clean:
	cd /d D:\Code\Algorithms\build && $(CMAKE_COMMAND) -P CMakeFiles\prim.dir\cmake_clean.cmake
.PHONY : CMakeFiles/prim.dir/clean

CMakeFiles/prim.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Code\Algorithms D:\Code\Algorithms D:\Code\Algorithms\build D:\Code\Algorithms\build D:\Code\Algorithms\build\CMakeFiles\prim.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/prim.dir/depend

