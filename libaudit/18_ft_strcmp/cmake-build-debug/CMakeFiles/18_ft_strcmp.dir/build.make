# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /Users/fjenae/Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Users/fjenae/Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/fjenae/Desktop/library/libaudit/18_ft_strcmp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/fjenae/Desktop/library/libaudit/18_ft_strcmp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/18_ft_strcmp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/18_ft_strcmp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/18_ft_strcmp.dir/flags.make

CMakeFiles/18_ft_strcmp.dir/main.c.o: CMakeFiles/18_ft_strcmp.dir/flags.make
CMakeFiles/18_ft_strcmp.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fjenae/Desktop/library/libaudit/18_ft_strcmp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/18_ft_strcmp.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/18_ft_strcmp.dir/main.c.o   -c /Users/fjenae/Desktop/library/libaudit/18_ft_strcmp/main.c

CMakeFiles/18_ft_strcmp.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/18_ft_strcmp.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/fjenae/Desktop/library/libaudit/18_ft_strcmp/main.c > CMakeFiles/18_ft_strcmp.dir/main.c.i

CMakeFiles/18_ft_strcmp.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/18_ft_strcmp.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/fjenae/Desktop/library/libaudit/18_ft_strcmp/main.c -o CMakeFiles/18_ft_strcmp.dir/main.c.s

# Object files for target 18_ft_strcmp
18_ft_strcmp_OBJECTS = \
"CMakeFiles/18_ft_strcmp.dir/main.c.o"

# External object files for target 18_ft_strcmp
18_ft_strcmp_EXTERNAL_OBJECTS =

18_ft_strcmp: CMakeFiles/18_ft_strcmp.dir/main.c.o
18_ft_strcmp: CMakeFiles/18_ft_strcmp.dir/build.make
18_ft_strcmp: CMakeFiles/18_ft_strcmp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/fjenae/Desktop/library/libaudit/18_ft_strcmp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 18_ft_strcmp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/18_ft_strcmp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/18_ft_strcmp.dir/build: 18_ft_strcmp

.PHONY : CMakeFiles/18_ft_strcmp.dir/build

CMakeFiles/18_ft_strcmp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/18_ft_strcmp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/18_ft_strcmp.dir/clean

CMakeFiles/18_ft_strcmp.dir/depend:
	cd /Users/fjenae/Desktop/library/libaudit/18_ft_strcmp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/fjenae/Desktop/library/libaudit/18_ft_strcmp /Users/fjenae/Desktop/library/libaudit/18_ft_strcmp /Users/fjenae/Desktop/library/libaudit/18_ft_strcmp/cmake-build-debug /Users/fjenae/Desktop/library/libaudit/18_ft_strcmp/cmake-build-debug /Users/fjenae/Desktop/library/libaudit/18_ft_strcmp/cmake-build-debug/CMakeFiles/18_ft_strcmp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/18_ft_strcmp.dir/depend

