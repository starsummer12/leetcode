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
CMAKE_SOURCE_DIR = "/Users/fireyr/Desktop/leetcode/leetcode_c_c++/easy/3.climb_stairs(70)"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/fireyr/Desktop/leetcode/leetcode_c_c++/easy/3.climb_stairs(70)/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/3_climb_stairs_70_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/3_climb_stairs_70_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/3_climb_stairs_70_.dir/flags.make

CMakeFiles/3_climb_stairs_70_.dir/main.cpp.o: CMakeFiles/3_climb_stairs_70_.dir/flags.make
CMakeFiles/3_climb_stairs_70_.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/fireyr/Desktop/leetcode/leetcode_c_c++/easy/3.climb_stairs(70)/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/3_climb_stairs_70_.dir/main.cpp.o"
	/usr/local/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/3_climb_stairs_70_.dir/main.cpp.o -c "/Users/fireyr/Desktop/leetcode/leetcode_c_c++/easy/3.climb_stairs(70)/main.cpp"

CMakeFiles/3_climb_stairs_70_.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3_climb_stairs_70_.dir/main.cpp.i"
	/usr/local/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/fireyr/Desktop/leetcode/leetcode_c_c++/easy/3.climb_stairs(70)/main.cpp" > CMakeFiles/3_climb_stairs_70_.dir/main.cpp.i

CMakeFiles/3_climb_stairs_70_.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3_climb_stairs_70_.dir/main.cpp.s"
	/usr/local/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/fireyr/Desktop/leetcode/leetcode_c_c++/easy/3.climb_stairs(70)/main.cpp" -o CMakeFiles/3_climb_stairs_70_.dir/main.cpp.s

# Object files for target 3_climb_stairs_70_
3_climb_stairs_70__OBJECTS = \
"CMakeFiles/3_climb_stairs_70_.dir/main.cpp.o"

# External object files for target 3_climb_stairs_70_
3_climb_stairs_70__EXTERNAL_OBJECTS =

3_climb_stairs_70_: CMakeFiles/3_climb_stairs_70_.dir/main.cpp.o
3_climb_stairs_70_: CMakeFiles/3_climb_stairs_70_.dir/build.make
3_climb_stairs_70_: CMakeFiles/3_climb_stairs_70_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/fireyr/Desktop/leetcode/leetcode_c_c++/easy/3.climb_stairs(70)/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 3_climb_stairs_70_"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/3_climb_stairs_70_.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/3_climb_stairs_70_.dir/build: 3_climb_stairs_70_

.PHONY : CMakeFiles/3_climb_stairs_70_.dir/build

CMakeFiles/3_climb_stairs_70_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/3_climb_stairs_70_.dir/cmake_clean.cmake
.PHONY : CMakeFiles/3_climb_stairs_70_.dir/clean

CMakeFiles/3_climb_stairs_70_.dir/depend:
	cd "/Users/fireyr/Desktop/leetcode/leetcode_c_c++/easy/3.climb_stairs(70)/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/fireyr/Desktop/leetcode/leetcode_c_c++/easy/3.climb_stairs(70)" "/Users/fireyr/Desktop/leetcode/leetcode_c_c++/easy/3.climb_stairs(70)" "/Users/fireyr/Desktop/leetcode/leetcode_c_c++/easy/3.climb_stairs(70)/cmake-build-debug" "/Users/fireyr/Desktop/leetcode/leetcode_c_c++/easy/3.climb_stairs(70)/cmake-build-debug" "/Users/fireyr/Desktop/leetcode/leetcode_c_c++/easy/3.climb_stairs(70)/cmake-build-debug/CMakeFiles/3_climb_stairs_70_.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/3_climb_stairs_70_.dir/depend

