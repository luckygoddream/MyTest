# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jiaowenqi/CLionProjects/MyTest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jiaowenqi/CLionProjects/MyTest/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/operationTest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/operationTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/operationTest.dir/flags.make

CMakeFiles/operationTest.dir/operationTest.cpp.o: CMakeFiles/operationTest.dir/flags.make
CMakeFiles/operationTest.dir/operationTest.cpp.o: ../operationTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jiaowenqi/CLionProjects/MyTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/operationTest.dir/operationTest.cpp.o"
	/opt/homebrew/Cellar/gcc/12.2.0/bin/g++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/operationTest.dir/operationTest.cpp.o -c /Users/jiaowenqi/CLionProjects/MyTest/operationTest.cpp

CMakeFiles/operationTest.dir/operationTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/operationTest.dir/operationTest.cpp.i"
	/opt/homebrew/Cellar/gcc/12.2.0/bin/g++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jiaowenqi/CLionProjects/MyTest/operationTest.cpp > CMakeFiles/operationTest.dir/operationTest.cpp.i

CMakeFiles/operationTest.dir/operationTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/operationTest.dir/operationTest.cpp.s"
	/opt/homebrew/Cellar/gcc/12.2.0/bin/g++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jiaowenqi/CLionProjects/MyTest/operationTest.cpp -o CMakeFiles/operationTest.dir/operationTest.cpp.s

# Object files for target operationTest
operationTest_OBJECTS = \
"CMakeFiles/operationTest.dir/operationTest.cpp.o"

# External object files for target operationTest
operationTest_EXTERNAL_OBJECTS =

operationTest: CMakeFiles/operationTest.dir/operationTest.cpp.o
operationTest: CMakeFiles/operationTest.dir/build.make
operationTest: CMakeFiles/operationTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jiaowenqi/CLionProjects/MyTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable operationTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/operationTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/operationTest.dir/build: operationTest

.PHONY : CMakeFiles/operationTest.dir/build

CMakeFiles/operationTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/operationTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/operationTest.dir/clean

CMakeFiles/operationTest.dir/depend:
	cd /Users/jiaowenqi/CLionProjects/MyTest/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jiaowenqi/CLionProjects/MyTest /Users/jiaowenqi/CLionProjects/MyTest /Users/jiaowenqi/CLionProjects/MyTest/cmake-build-debug /Users/jiaowenqi/CLionProjects/MyTest/cmake-build-debug /Users/jiaowenqi/CLionProjects/MyTest/cmake-build-debug/CMakeFiles/operationTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/operationTest.dir/depend

