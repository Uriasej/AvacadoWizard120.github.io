# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /snap/cmake/870/bin/cmake

# The command to remove a file.
RM = /snap/cmake/870/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build

# Utility rule file for tomlc99_autogen.

# Include any custom commands dependencies for this target.
include libraries/tomlc99/CMakeFiles/tomlc99_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include libraries/tomlc99/CMakeFiles/tomlc99_autogen.dir/progress.make

libraries/tomlc99/CMakeFiles/tomlc99_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target tomlc99"
	cd /home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/libraries/tomlc99 && /snap/cmake/870/bin/cmake -E cmake_autogen /home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/libraries/tomlc99/CMakeFiles/tomlc99_autogen.dir/AutogenInfo.json ""

tomlc99_autogen: libraries/tomlc99/CMakeFiles/tomlc99_autogen
tomlc99_autogen: libraries/tomlc99/CMakeFiles/tomlc99_autogen.dir/build.make
.PHONY : tomlc99_autogen

# Rule to build all files generated by this target.
libraries/tomlc99/CMakeFiles/tomlc99_autogen.dir/build: tomlc99_autogen
.PHONY : libraries/tomlc99/CMakeFiles/tomlc99_autogen.dir/build

libraries/tomlc99/CMakeFiles/tomlc99_autogen.dir/clean:
	cd /home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/libraries/tomlc99 && $(CMAKE_COMMAND) -P CMakeFiles/tomlc99_autogen.dir/cmake_clean.cmake
.PHONY : libraries/tomlc99/CMakeFiles/tomlc99_autogen.dir/clean

libraries/tomlc99/CMakeFiles/tomlc99_autogen.dir/depend:
	cd /home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/src /home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/src/libraries/tomlc99 /home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build /home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/libraries/tomlc99 /home/eden/MinecraftChromebook/ChromebookMCreal/AvacadoWizard120.github.io/build-files/build/libraries/tomlc99/CMakeFiles/tomlc99_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libraries/tomlc99/CMakeFiles/tomlc99_autogen.dir/depend

