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
CMAKE_SOURCE_DIR = /Users/fjenae/Desktop/libaudit/43_ft_strjoin

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/fjenae/Desktop/libaudit/43_ft_strjoin/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/43_ft_strjoin.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/43_ft_strjoin.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/43_ft_strjoin.dir/flags.make

CMakeFiles/43_ft_strjoin.dir/main.c.o: CMakeFiles/43_ft_strjoin.dir/flags.make
CMakeFiles/43_ft_strjoin.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fjenae/Desktop/libaudit/43_ft_strjoin/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/43_ft_strjoin.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/43_ft_strjoin.dir/main.c.o   -c /Users/fjenae/Desktop/libaudit/43_ft_strjoin/main.c

CMakeFiles/43_ft_strjoin.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/43_ft_strjoin.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/fjenae/Desktop/libaudit/43_ft_strjoin/main.c > CMakeFiles/43_ft_strjoin.dir/main.c.i

CMakeFiles/43_ft_strjoin.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/43_ft_strjoin.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/fjenae/Desktop/libaudit/43_ft_strjoin/main.c -o CMakeFiles/43_ft_strjoin.dir/main.c.s

# Object files for target 43_ft_strjoin
43_ft_strjoin_OBJECTS = \
"CMakeFiles/43_ft_strjoin.dir/main.c.o"

# External object files for target 43_ft_strjoin
43_ft_strjoin_EXTERNAL_OBJECTS =

43_ft_strjoin: CMakeFiles/43_ft_strjoin.dir/main.c.o
43_ft_strjoin: CMakeFiles/43_ft_strjoin.dir/build.make
43_ft_strjoin: CMakeFiles/43_ft_strjoin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/fjenae/Desktop/libaudit/43_ft_strjoin/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 43_ft_strjoin"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/43_ft_strjoin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/43_ft_strjoin.dir/build: 43_ft_strjoin

.PHONY : CMakeFiles/43_ft_strjoin.dir/build

CMakeFiles/43_ft_strjoin.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/43_ft_strjoin.dir/cmake_clean.cmake
.PHONY : CMakeFiles/43_ft_strjoin.dir/clean

CMakeFiles/43_ft_strjoin.dir/depend:
	cd /Users/fjenae/Desktop/libaudit/43_ft_strjoin/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/fjenae/Desktop/libaudit/43_ft_strjoin /Users/fjenae/Desktop/libaudit/43_ft_strjoin /Users/fjenae/Desktop/libaudit/43_ft_strjoin/cmake-build-debug /Users/fjenae/Desktop/libaudit/43_ft_strjoin/cmake-build-debug /Users/fjenae/Desktop/libaudit/43_ft_strjoin/cmake-build-debug/CMakeFiles/43_ft_strjoin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/43_ft_strjoin.dir/depend
