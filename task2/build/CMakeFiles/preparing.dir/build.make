# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/stepyndriyy/Документы/mipt/cpp_works/tasks/task2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/stepyndriyy/Документы/mipt/cpp_works/tasks/task2/build

# Utility rule file for preparing.

# Include the progress variables for this target.
include CMakeFiles/preparing.dir/progress.make

CMakeFiles/preparing: ../A/index.h


../A/index.h:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/stepyndriyy/Документы/mipt/cpp_works/tasks/task2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ../A/index.h"
	python3 /home/stepyndriyy/Документы/mipt/cpp_works/tasks/task2/A/preparing.py /home/stepyndriyy/Документы/mipt/cpp_works/tasks/task2/A/index.h COMMEND generate\ include.h

preparing: CMakeFiles/preparing
preparing: ../A/index.h
preparing: CMakeFiles/preparing.dir/build.make

.PHONY : preparing

# Rule to build all files generated by this target.
CMakeFiles/preparing.dir/build: preparing

.PHONY : CMakeFiles/preparing.dir/build

CMakeFiles/preparing.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/preparing.dir/cmake_clean.cmake
.PHONY : CMakeFiles/preparing.dir/clean

CMakeFiles/preparing.dir/depend:
	cd /home/stepyndriyy/Документы/mipt/cpp_works/tasks/task2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/stepyndriyy/Документы/mipt/cpp_works/tasks/task2 /home/stepyndriyy/Документы/mipt/cpp_works/tasks/task2 /home/stepyndriyy/Документы/mipt/cpp_works/tasks/task2/build /home/stepyndriyy/Документы/mipt/cpp_works/tasks/task2/build /home/stepyndriyy/Документы/mipt/cpp_works/tasks/task2/build/CMakeFiles/preparing.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/preparing.dir/depend
