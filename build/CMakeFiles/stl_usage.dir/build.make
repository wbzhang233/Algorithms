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
include CMakeFiles/stl_usage.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stl_usage.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stl_usage.dir/flags.make

CMakeFiles/stl_usage.dir/4-STL/stl_usage.cpp.obj: CMakeFiles/stl_usage.dir/flags.make
CMakeFiles/stl_usage.dir/4-STL/stl_usage.cpp.obj: ../4-STL/stl_usage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Code\Algorithms\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stl_usage.dir/4-STL/stl_usage.cpp.obj"
	cd /d D:\Code\Algorithms\build && D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\stl_usage.dir\4-STL\stl_usage.cpp.obj -c D:\Code\Algorithms\4-STL\stl_usage.cpp

CMakeFiles/stl_usage.dir/4-STL/stl_usage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stl_usage.dir/4-STL/stl_usage.cpp.i"
	cd /d D:\Code\Algorithms\build && D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Code\Algorithms\4-STL\stl_usage.cpp > CMakeFiles\stl_usage.dir\4-STL\stl_usage.cpp.i

CMakeFiles/stl_usage.dir/4-STL/stl_usage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stl_usage.dir/4-STL/stl_usage.cpp.s"
	cd /d D:\Code\Algorithms\build && D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Code\Algorithms\4-STL\stl_usage.cpp -o CMakeFiles\stl_usage.dir\4-STL\stl_usage.cpp.s

CMakeFiles/stl_usage.dir/4-STL/stl_usage.cpp.obj.requires:

.PHONY : CMakeFiles/stl_usage.dir/4-STL/stl_usage.cpp.obj.requires

CMakeFiles/stl_usage.dir/4-STL/stl_usage.cpp.obj.provides: CMakeFiles/stl_usage.dir/4-STL/stl_usage.cpp.obj.requires
	$(MAKE) -f CMakeFiles\stl_usage.dir\build.make CMakeFiles/stl_usage.dir/4-STL/stl_usage.cpp.obj.provides.build
.PHONY : CMakeFiles/stl_usage.dir/4-STL/stl_usage.cpp.obj.provides

CMakeFiles/stl_usage.dir/4-STL/stl_usage.cpp.obj.provides.build: CMakeFiles/stl_usage.dir/4-STL/stl_usage.cpp.obj


# Object files for target stl_usage
stl_usage_OBJECTS = \
"CMakeFiles/stl_usage.dir/4-STL/stl_usage.cpp.obj"

# External object files for target stl_usage
stl_usage_EXTERNAL_OBJECTS =

stl_usage.exe: CMakeFiles/stl_usage.dir/4-STL/stl_usage.cpp.obj
stl_usage.exe: CMakeFiles/stl_usage.dir/build.make
stl_usage.exe: CMakeFiles/stl_usage.dir/linklibs.rsp
stl_usage.exe: CMakeFiles/stl_usage.dir/objects1.rsp
stl_usage.exe: CMakeFiles/stl_usage.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Code\Algorithms\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable stl_usage.exe"
	cd /d D:\Code\Algorithms\build && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\stl_usage.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stl_usage.dir/build: stl_usage.exe

.PHONY : CMakeFiles/stl_usage.dir/build

CMakeFiles/stl_usage.dir/requires: CMakeFiles/stl_usage.dir/4-STL/stl_usage.cpp.obj.requires

.PHONY : CMakeFiles/stl_usage.dir/requires

CMakeFiles/stl_usage.dir/clean:
	cd /d D:\Code\Algorithms\build && $(CMAKE_COMMAND) -P CMakeFiles\stl_usage.dir\cmake_clean.cmake
.PHONY : CMakeFiles/stl_usage.dir/clean

CMakeFiles/stl_usage.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Code\Algorithms D:\Code\Algorithms D:\Code\Algorithms\build D:\Code\Algorithms\build D:\Code\Algorithms\build\CMakeFiles\stl_usage.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stl_usage.dir/depend
