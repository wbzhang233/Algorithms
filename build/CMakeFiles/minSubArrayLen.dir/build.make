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
include CMakeFiles/minSubArrayLen.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/minSubArrayLen.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/minSubArrayLen.dir/flags.make

CMakeFiles/minSubArrayLen.dir/2-arrayAndString/minSubArrayLen.cpp.obj: CMakeFiles/minSubArrayLen.dir/flags.make
CMakeFiles/minSubArrayLen.dir/2-arrayAndString/minSubArrayLen.cpp.obj: ../2-arrayAndString/minSubArrayLen.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Code\Algorithms\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/minSubArrayLen.dir/2-arrayAndString/minSubArrayLen.cpp.obj"
	cd /d D:\Code\Algorithms\build && D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\minSubArrayLen.dir\2-arrayAndString\minSubArrayLen.cpp.obj -c D:\Code\Algorithms\2-arrayAndString\minSubArrayLen.cpp

CMakeFiles/minSubArrayLen.dir/2-arrayAndString/minSubArrayLen.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/minSubArrayLen.dir/2-arrayAndString/minSubArrayLen.cpp.i"
	cd /d D:\Code\Algorithms\build && D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Code\Algorithms\2-arrayAndString\minSubArrayLen.cpp > CMakeFiles\minSubArrayLen.dir\2-arrayAndString\minSubArrayLen.cpp.i

CMakeFiles/minSubArrayLen.dir/2-arrayAndString/minSubArrayLen.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/minSubArrayLen.dir/2-arrayAndString/minSubArrayLen.cpp.s"
	cd /d D:\Code\Algorithms\build && D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Code\Algorithms\2-arrayAndString\minSubArrayLen.cpp -o CMakeFiles\minSubArrayLen.dir\2-arrayAndString\minSubArrayLen.cpp.s

CMakeFiles/minSubArrayLen.dir/2-arrayAndString/minSubArrayLen.cpp.obj.requires:

.PHONY : CMakeFiles/minSubArrayLen.dir/2-arrayAndString/minSubArrayLen.cpp.obj.requires

CMakeFiles/minSubArrayLen.dir/2-arrayAndString/minSubArrayLen.cpp.obj.provides: CMakeFiles/minSubArrayLen.dir/2-arrayAndString/minSubArrayLen.cpp.obj.requires
	$(MAKE) -f CMakeFiles\minSubArrayLen.dir\build.make CMakeFiles/minSubArrayLen.dir/2-arrayAndString/minSubArrayLen.cpp.obj.provides.build
.PHONY : CMakeFiles/minSubArrayLen.dir/2-arrayAndString/minSubArrayLen.cpp.obj.provides

CMakeFiles/minSubArrayLen.dir/2-arrayAndString/minSubArrayLen.cpp.obj.provides.build: CMakeFiles/minSubArrayLen.dir/2-arrayAndString/minSubArrayLen.cpp.obj


# Object files for target minSubArrayLen
minSubArrayLen_OBJECTS = \
"CMakeFiles/minSubArrayLen.dir/2-arrayAndString/minSubArrayLen.cpp.obj"

# External object files for target minSubArrayLen
minSubArrayLen_EXTERNAL_OBJECTS =

minSubArrayLen.exe: CMakeFiles/minSubArrayLen.dir/2-arrayAndString/minSubArrayLen.cpp.obj
minSubArrayLen.exe: CMakeFiles/minSubArrayLen.dir/build.make
minSubArrayLen.exe: CMakeFiles/minSubArrayLen.dir/linklibs.rsp
minSubArrayLen.exe: CMakeFiles/minSubArrayLen.dir/objects1.rsp
minSubArrayLen.exe: CMakeFiles/minSubArrayLen.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Code\Algorithms\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable minSubArrayLen.exe"
	cd /d D:\Code\Algorithms\build && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\minSubArrayLen.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/minSubArrayLen.dir/build: minSubArrayLen.exe

.PHONY : CMakeFiles/minSubArrayLen.dir/build

CMakeFiles/minSubArrayLen.dir/requires: CMakeFiles/minSubArrayLen.dir/2-arrayAndString/minSubArrayLen.cpp.obj.requires

.PHONY : CMakeFiles/minSubArrayLen.dir/requires

CMakeFiles/minSubArrayLen.dir/clean:
	cd /d D:\Code\Algorithms\build && $(CMAKE_COMMAND) -P CMakeFiles\minSubArrayLen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/minSubArrayLen.dir/clean

CMakeFiles/minSubArrayLen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Code\Algorithms D:\Code\Algorithms D:\Code\Algorithms\build D:\Code\Algorithms\build D:\Code\Algorithms\build\CMakeFiles\minSubArrayLen.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/minSubArrayLen.dir/depend

