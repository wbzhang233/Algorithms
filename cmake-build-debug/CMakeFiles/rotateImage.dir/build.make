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
include CMakeFiles/rotateImage.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rotateImage.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rotateImage.dir/flags.make

CMakeFiles/rotateImage.dir/2-arrayAndString/rotateImage.cpp.obj: CMakeFiles/rotateImage.dir/flags.make
CMakeFiles/rotateImage.dir/2-arrayAndString/rotateImage.cpp.obj: ../2-arrayAndString/rotateImage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Code\Algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rotateImage.dir/2-arrayAndString/rotateImage.cpp.obj"
	D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\rotateImage.dir\2-arrayAndString\rotateImage.cpp.obj -c D:\Code\Algorithms\2-arrayAndString\rotateImage.cpp

CMakeFiles/rotateImage.dir/2-arrayAndString/rotateImage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rotateImage.dir/2-arrayAndString/rotateImage.cpp.i"
	D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Code\Algorithms\2-arrayAndString\rotateImage.cpp > CMakeFiles\rotateImage.dir\2-arrayAndString\rotateImage.cpp.i

CMakeFiles/rotateImage.dir/2-arrayAndString/rotateImage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rotateImage.dir/2-arrayAndString/rotateImage.cpp.s"
	D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Code\Algorithms\2-arrayAndString\rotateImage.cpp -o CMakeFiles\rotateImage.dir\2-arrayAndString\rotateImage.cpp.s

# Object files for target rotateImage
rotateImage_OBJECTS = \
"CMakeFiles/rotateImage.dir/2-arrayAndString/rotateImage.cpp.obj"

# External object files for target rotateImage
rotateImage_EXTERNAL_OBJECTS =

rotateImage.exe: CMakeFiles/rotateImage.dir/2-arrayAndString/rotateImage.cpp.obj
rotateImage.exe: CMakeFiles/rotateImage.dir/build.make
rotateImage.exe: CMakeFiles/rotateImage.dir/linklibs.rsp
rotateImage.exe: CMakeFiles/rotateImage.dir/objects1.rsp
rotateImage.exe: CMakeFiles/rotateImage.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Code\Algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable rotateImage.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\rotateImage.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rotateImage.dir/build: rotateImage.exe

.PHONY : CMakeFiles/rotateImage.dir/build

CMakeFiles/rotateImage.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\rotateImage.dir\cmake_clean.cmake
.PHONY : CMakeFiles/rotateImage.dir/clean

CMakeFiles/rotateImage.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Code\Algorithms D:\Code\Algorithms D:\Code\Algorithms\cmake-build-debug D:\Code\Algorithms\cmake-build-debug D:\Code\Algorithms\cmake-build-debug\CMakeFiles\rotateImage.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rotateImage.dir/depend
