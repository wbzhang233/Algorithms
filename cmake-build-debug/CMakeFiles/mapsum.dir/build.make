# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Code\Algorithms

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Code\Algorithms\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mapsum.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mapsum.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mapsum.dir/flags.make

CMakeFiles/mapsum.dir/16-Trie/mapsum.cpp.obj: CMakeFiles/mapsum.dir/flags.make
CMakeFiles/mapsum.dir/16-Trie/mapsum.cpp.obj: ../16-Trie/mapsum.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Code\Algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mapsum.dir/16-Trie/mapsum.cpp.obj"
	D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\mapsum.dir\16-Trie\mapsum.cpp.obj -c D:\Code\Algorithms\16-Trie\mapsum.cpp

CMakeFiles/mapsum.dir/16-Trie/mapsum.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mapsum.dir/16-Trie/mapsum.cpp.i"
	D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Code\Algorithms\16-Trie\mapsum.cpp > CMakeFiles\mapsum.dir\16-Trie\mapsum.cpp.i

CMakeFiles/mapsum.dir/16-Trie/mapsum.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mapsum.dir/16-Trie/mapsum.cpp.s"
	D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Code\Algorithms\16-Trie\mapsum.cpp -o CMakeFiles\mapsum.dir\16-Trie\mapsum.cpp.s

# Object files for target mapsum
mapsum_OBJECTS = \
"CMakeFiles/mapsum.dir/16-Trie/mapsum.cpp.obj"

# External object files for target mapsum
mapsum_EXTERNAL_OBJECTS =

mapsum.exe: CMakeFiles/mapsum.dir/16-Trie/mapsum.cpp.obj
mapsum.exe: CMakeFiles/mapsum.dir/build.make
mapsum.exe: CMakeFiles/mapsum.dir/linklibs.rsp
mapsum.exe: CMakeFiles/mapsum.dir/objects1.rsp
mapsum.exe: CMakeFiles/mapsum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Code\Algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mapsum.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\mapsum.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mapsum.dir/build: mapsum.exe

.PHONY : CMakeFiles/mapsum.dir/build

CMakeFiles/mapsum.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\mapsum.dir\cmake_clean.cmake
.PHONY : CMakeFiles/mapsum.dir/clean

CMakeFiles/mapsum.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Code\Algorithms D:\Code\Algorithms D:\Code\Algorithms\cmake-build-debug D:\Code\Algorithms\cmake-build-debug D:\Code\Algorithms\cmake-build-debug\CMakeFiles\mapsum.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mapsum.dir/depend

