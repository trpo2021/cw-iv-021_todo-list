# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/pavel/Документы/cw-iv-021_todo-list/ToDo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pavel/Документы/cw-iv-021_todo-list/build

# Utility rule file for qtcsv_autogen.

# Include the progress variables for this target.
include thirdparty/qtcsv/CMakeFiles/qtcsv_autogen.dir/progress.make

thirdparty/qtcsv/CMakeFiles/qtcsv_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pavel/Документы/cw-iv-021_todo-list/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target qtcsv"
	cd /home/pavel/Документы/cw-iv-021_todo-list/build/thirdparty/qtcsv && /usr/bin/cmake -E cmake_autogen /home/pavel/Документы/cw-iv-021_todo-list/build/thirdparty/qtcsv/CMakeFiles/qtcsv_autogen.dir/AutogenInfo.json ""

qtcsv_autogen: thirdparty/qtcsv/CMakeFiles/qtcsv_autogen
qtcsv_autogen: thirdparty/qtcsv/CMakeFiles/qtcsv_autogen.dir/build.make

.PHONY : qtcsv_autogen

# Rule to build all files generated by this target.
thirdparty/qtcsv/CMakeFiles/qtcsv_autogen.dir/build: qtcsv_autogen

.PHONY : thirdparty/qtcsv/CMakeFiles/qtcsv_autogen.dir/build

thirdparty/qtcsv/CMakeFiles/qtcsv_autogen.dir/clean:
	cd /home/pavel/Документы/cw-iv-021_todo-list/build/thirdparty/qtcsv && $(CMAKE_COMMAND) -P CMakeFiles/qtcsv_autogen.dir/cmake_clean.cmake
.PHONY : thirdparty/qtcsv/CMakeFiles/qtcsv_autogen.dir/clean

thirdparty/qtcsv/CMakeFiles/qtcsv_autogen.dir/depend:
	cd /home/pavel/Документы/cw-iv-021_todo-list/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pavel/Документы/cw-iv-021_todo-list/ToDo /home/pavel/Документы/cw-iv-021_todo-list/ToDo/thirdparty/qtcsv /home/pavel/Документы/cw-iv-021_todo-list/build /home/pavel/Документы/cw-iv-021_todo-list/build/thirdparty/qtcsv /home/pavel/Документы/cw-iv-021_todo-list/build/thirdparty/qtcsv/CMakeFiles/qtcsv_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : thirdparty/qtcsv/CMakeFiles/qtcsv_autogen.dir/depend

