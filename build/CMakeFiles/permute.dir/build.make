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
include CMakeFiles/permute.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/permute.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/permute.dir/flags.make

CMakeFiles/permute.dir/7-Backtrack/permute.cpp.obj: CMakeFiles/permute.dir/flags.make
CMakeFiles/permute.dir/7-Backtrack/permute.cpp.obj: ../7-Backtrack/permute.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Code\Algorithms\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/permute.dir/7-Backtrack/permute.cpp.obj"
	cd /d D:\Code\Algorithms\build && D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\permute.dir\7-Backtrack\permute.cpp.obj -c D:\Code\Algorithms\7-Backtrack\permute.cpp

CMakeFiles/permute.dir/7-Backtrack/permute.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/permute.dir/7-Backtrack/permute.cpp.i"
	cd /d D:\Code\Algorithms\build && D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Code\Algorithms\7-Backtrack\permute.cpp > CMakeFiles\permute.dir\7-Backtrack\permute.cpp.i

CMakeFiles/permute.dir/7-Backtrack/permute.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/permute.dir/7-Backtrack/permute.cpp.s"
	cd /d D:\Code\Algorithms\build && D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Code\Algorithms\7-Backtrack\permute.cpp -o CMakeFiles\permute.dir\7-Backtrack\permute.cpp.s

CMakeFiles/permute.dir/7-Backtrack/permute.cpp.obj.requires:

.PHONY : CMakeFiles/permute.dir/7-Backtrack/permute.cpp.obj.requires

CMakeFiles/permute.dir/7-Backtrack/permute.cpp.obj.provides: CMakeFiles/permute.dir/7-Backtrack/permute.cpp.obj.requires
	$(MAKE) -f CMakeFiles\permute.dir\build.make CMakeFiles/permute.dir/7-Backtrack/permute.cpp.obj.provides.build
.PHONY : CMakeFiles/permute.dir/7-Backtrack/permute.cpp.obj.provides

CMakeFiles/permute.dir/7-Backtrack/permute.cpp.obj.provides.build: CMakeFiles/permute.dir/7-Backtrack/permute.cpp.obj


# Object files for target permute
permute_OBJECTS = \
"CMakeFiles/permute.dir/7-Backtrack/permute.cpp.obj"

# External object files for target permute
permute_EXTERNAL_OBJECTS =

permute.exe: CMakeFiles/permute.dir/7-Backtrack/permute.cpp.obj
permute.exe: CMakeFiles/permute.dir/build.make
permute.exe: CMakeFiles/permute.dir/linklibs.rsp
permute.exe: CMakeFiles/permute.dir/objects1.rsp
permute.exe: CMakeFiles/permute.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Code\Algorithms\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable permute.exe"
	cd /d D:\Code\Algorithms\build && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\permute.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/permute.dir/build: permute.exe

.PHONY : CMakeFiles/permute.dir/build

CMakeFiles/permute.dir/requires: CMakeFiles/permute.dir/7-Backtrack/permute.cpp.obj.requires

.PHONY : CMakeFiles/permute.dir/requires

CMakeFiles/permute.dir/clean:
	cd /d D:\Code\Algorithms\build && $(CMAKE_COMMAND) -P CMakeFiles\permute.dir\cmake_clean.cmake
.PHONY : CMakeFiles/permute.dir/clean

CMakeFiles/permute.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Code\Algorithms D:\Code\Algorithms D:\Code\Algorithms\build D:\Code\Algorithms\build D:\Code\Algorithms\build\CMakeFiles\permute.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/permute.dir/depend

