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
CMAKE_SOURCE_DIR = /home/pavel/Документы/cw-iv-021_todo-list

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pavel/Документы/cw-iv-021_todo-list

# Utility rule file for MainMenu_autogen.

# Include the progress variables for this target.
include ToDo/CMakeFiles/MainMenu_autogen.dir/progress.make

ToDo/CMakeFiles/MainMenu_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pavel/Документы/cw-iv-021_todo-list/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target MainMenu"
	cd /home/pavel/Документы/cw-iv-021_todo-list/ToDo && /usr/bin/cmake -E cmake_autogen /home/pavel/Документы/cw-iv-021_todo-list/ToDo/CMakeFiles/MainMenu_autogen.dir/AutogenInfo.json Release

MainMenu_autogen: ToDo/CMakeFiles/MainMenu_autogen
MainMenu_autogen: ToDo/CMakeFiles/MainMenu_autogen.dir/build.make

.PHONY : MainMenu_autogen

# Rule to build all files generated by this target.
ToDo/CMakeFiles/MainMenu_autogen.dir/build: MainMenu_autogen

.PHONY : ToDo/CMakeFiles/MainMenu_autogen.dir/build

ToDo/CMakeFiles/MainMenu_autogen.dir/clean:
	cd /home/pavel/Документы/cw-iv-021_todo-list/ToDo && $(CMAKE_COMMAND) -P CMakeFiles/MainMenu_autogen.dir/cmake_clean.cmake
.PHONY : ToDo/CMakeFiles/MainMenu_autogen.dir/clean

ToDo/CMakeFiles/MainMenu_autogen.dir/depend:
	cd /home/pavel/Документы/cw-iv-021_todo-list && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pavel/Документы/cw-iv-021_todo-list /home/pavel/Документы/cw-iv-021_todo-list/ToDo /home/pavel/Документы/cw-iv-021_todo-list /home/pavel/Документы/cw-iv-021_todo-list/ToDo /home/pavel/Документы/cw-iv-021_todo-list/ToDo/CMakeFiles/MainMenu_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ToDo/CMakeFiles/MainMenu_autogen.dir/depend

