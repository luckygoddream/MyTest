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
include CMakeFiles/MyTest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MyTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyTest.dir/flags.make

CMakeFiles/MyTest.dir/main.cpp.o: CMakeFiles/MyTest.dir/flags.make
CMakeFiles/MyTest.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jiaowenqi/CLionProjects/MyTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyTest.dir/main.cpp.o"
	/opt/homebrew/Cellar/gcc/12.2.0/bin/g++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MyTest.dir/main.cpp.o -c /Users/jiaowenqi/CLionProjects/MyTest/main.cpp

CMakeFiles/MyTest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyTest.dir/main.cpp.i"
	/opt/homebrew/Cellar/gcc/12.2.0/bin/g++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jiaowenqi/CLionProjects/MyTest/main.cpp > CMakeFiles/MyTest.dir/main.cpp.i

CMakeFiles/MyTest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyTest.dir/main.cpp.s"
	/opt/homebrew/Cellar/gcc/12.2.0/bin/g++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jiaowenqi/CLionProjects/MyTest/main.cpp -o CMakeFiles/MyTest.dir/main.cpp.s

# Object files for target MyTest
MyTest_OBJECTS = \
"CMakeFiles/MyTest.dir/main.cpp.o"

# External object files for target MyTest
MyTest_EXTERNAL_OBJECTS =

MyTest: CMakeFiles/MyTest.dir/main.cpp.o
MyTest: CMakeFiles/MyTest.dir/build.make
MyTest: CMakeFiles/MyTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jiaowenqi/CLionProjects/MyTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MyTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyTest.dir/build: MyTest

.PHONY : CMakeFiles/MyTest.dir/build

CMakeFiles/MyTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MyTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MyTest.dir/clean

CMakeFiles/MyTest.dir/depend:
	cd /Users/jiaowenqi/CLionProjects/MyTest/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jiaowenqi/CLionProjects/MyTest /Users/jiaowenqi/CLionProjects/MyTest /Users/jiaowenqi/CLionProjects/MyTest/cmake-build-debug /Users/jiaowenqi/CLionProjects/MyTest/cmake-build-debug /Users/jiaowenqi/CLionProjects/MyTest/cmake-build-debug/CMakeFiles/MyTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MyTest.dir/depend
