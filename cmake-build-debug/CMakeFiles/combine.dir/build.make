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
include CMakeFiles/combine.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/combine.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/combine.dir/flags.make

CMakeFiles/combine.dir/7-Backtrack/combine.cpp.obj: CMakeFiles/combine.dir/flags.make
CMakeFiles/combine.dir/7-Backtrack/combine.cpp.obj: ../7-Backtrack/combine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Code\Algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/combine.dir/7-Backtrack/combine.cpp.obj"
	D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\combine.dir\7-Backtrack\combine.cpp.obj -c D:\Code\Algorithms\7-Backtrack\combine.cpp

CMakeFiles/combine.dir/7-Backtrack/combine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/combine.dir/7-Backtrack/combine.cpp.i"
	D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Code\Algorithms\7-Backtrack\combine.cpp > CMakeFiles\combine.dir\7-Backtrack\combine.cpp.i

CMakeFiles/combine.dir/7-Backtrack/combine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/combine.dir/7-Backtrack/combine.cpp.s"
	D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Code\Algorithms\7-Backtrack\combine.cpp -o CMakeFiles\combine.dir\7-Backtrack\combine.cpp.s

# Object files for target combine
combine_OBJECTS = \
"CMakeFiles/combine.dir/7-Backtrack/combine.cpp.obj"

# External object files for target combine
combine_EXTERNAL_OBJECTS =

combine.exe: CMakeFiles/combine.dir/7-Backtrack/combine.cpp.obj
combine.exe: CMakeFiles/combine.dir/build.make
combine.exe: CMakeFiles/combine.dir/linklibs.rsp
combine.exe: CMakeFiles/combine.dir/objects1.rsp
combine.exe: CMakeFiles/combine.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Code\Algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable combine.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\combine.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/combine.dir/build: combine.exe

.PHONY : CMakeFiles/combine.dir/build

CMakeFiles/combine.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\combine.dir\cmake_clean.cmake
.PHONY : CMakeFiles/combine.dir/clean

CMakeFiles/combine.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Code\Algorithms D:\Code\Algorithms D:\Code\Algorithms\cmake-build-debug D:\Code\Algorithms\cmake-build-debug D:\Code\Algorithms\cmake-build-debug\CMakeFiles\combine.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/combine.dir/depend

