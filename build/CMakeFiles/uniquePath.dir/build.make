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
include CMakeFiles/uniquePath.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/uniquePath.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/uniquePath.dir/flags.make

CMakeFiles/uniquePath.dir/11-dfs/uniquePath.cpp.obj: CMakeFiles/uniquePath.dir/flags.make
CMakeFiles/uniquePath.dir/11-dfs/uniquePath.cpp.obj: ../11-dfs/uniquePath.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Code\Algorithms\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/uniquePath.dir/11-dfs/uniquePath.cpp.obj"
	cd /d D:\Code\Algorithms\build && D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\uniquePath.dir\11-dfs\uniquePath.cpp.obj -c D:\Code\Algorithms\11-dfs\uniquePath.cpp

CMakeFiles/uniquePath.dir/11-dfs/uniquePath.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uniquePath.dir/11-dfs/uniquePath.cpp.i"
	cd /d D:\Code\Algorithms\build && D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Code\Algorithms\11-dfs\uniquePath.cpp > CMakeFiles\uniquePath.dir\11-dfs\uniquePath.cpp.i

CMakeFiles/uniquePath.dir/11-dfs/uniquePath.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uniquePath.dir/11-dfs/uniquePath.cpp.s"
	cd /d D:\Code\Algorithms\build && D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Code\Algorithms\11-dfs\uniquePath.cpp -o CMakeFiles\uniquePath.dir\11-dfs\uniquePath.cpp.s

CMakeFiles/uniquePath.dir/11-dfs/uniquePath.cpp.obj.requires:

.PHONY : CMakeFiles/uniquePath.dir/11-dfs/uniquePath.cpp.obj.requires

CMakeFiles/uniquePath.dir/11-dfs/uniquePath.cpp.obj.provides: CMakeFiles/uniquePath.dir/11-dfs/uniquePath.cpp.obj.requires
	$(MAKE) -f CMakeFiles\uniquePath.dir\build.make CMakeFiles/uniquePath.dir/11-dfs/uniquePath.cpp.obj.provides.build
.PHONY : CMakeFiles/uniquePath.dir/11-dfs/uniquePath.cpp.obj.provides

CMakeFiles/uniquePath.dir/11-dfs/uniquePath.cpp.obj.provides.build: CMakeFiles/uniquePath.dir/11-dfs/uniquePath.cpp.obj


# Object files for target uniquePath
uniquePath_OBJECTS = \
"CMakeFiles/uniquePath.dir/11-dfs/uniquePath.cpp.obj"

# External object files for target uniquePath
uniquePath_EXTERNAL_OBJECTS =

uniquePath.exe: CMakeFiles/uniquePath.dir/11-dfs/uniquePath.cpp.obj
uniquePath.exe: CMakeFiles/uniquePath.dir/build.make
uniquePath.exe: CMakeFiles/uniquePath.dir/linklibs.rsp
uniquePath.exe: CMakeFiles/uniquePath.dir/objects1.rsp
uniquePath.exe: CMakeFiles/uniquePath.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Code\Algorithms\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable uniquePath.exe"
	cd /d D:\Code\Algorithms\build && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\uniquePath.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/uniquePath.dir/build: uniquePath.exe

.PHONY : CMakeFiles/uniquePath.dir/build

CMakeFiles/uniquePath.dir/requires: CMakeFiles/uniquePath.dir/11-dfs/uniquePath.cpp.obj.requires

.PHONY : CMakeFiles/uniquePath.dir/requires

CMakeFiles/uniquePath.dir/clean:
	cd /d D:\Code\Algorithms\build && $(CMAKE_COMMAND) -P CMakeFiles\uniquePath.dir\cmake_clean.cmake
.PHONY : CMakeFiles/uniquePath.dir/clean

CMakeFiles/uniquePath.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Code\Algorithms D:\Code\Algorithms D:\Code\Algorithms\build D:\Code\Algorithms\build D:\Code\Algorithms\build\CMakeFiles\uniquePath.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/uniquePath.dir/depend

