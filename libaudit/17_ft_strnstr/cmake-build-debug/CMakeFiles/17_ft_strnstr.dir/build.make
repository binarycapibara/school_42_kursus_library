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
CMAKE_SOURCE_DIR = /Users/fjenae/Desktop/library/libaudit/17_ft_strnstr

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/fjenae/Desktop/library/libaudit/17_ft_strnstr/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/17_ft_strnstr.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/17_ft_strnstr.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/17_ft_strnstr.dir/flags.make

CMakeFiles/17_ft_strnstr.dir/main.c.o: CMakeFiles/17_ft_strnstr.dir/flags.make
CMakeFiles/17_ft_strnstr.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fjenae/Desktop/library/libaudit/17_ft_strnstr/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/17_ft_strnstr.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/17_ft_strnstr.dir/main.c.o   -c /Users/fjenae/Desktop/library/libaudit/17_ft_strnstr/main.c

CMakeFiles/17_ft_strnstr.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/17_ft_strnstr.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/fjenae/Desktop/library/libaudit/17_ft_strnstr/main.c > CMakeFiles/17_ft_strnstr.dir/main.c.i

CMakeFiles/17_ft_strnstr.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/17_ft_strnstr.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/fjenae/Desktop/library/libaudit/17_ft_strnstr/main.c -o CMakeFiles/17_ft_strnstr.dir/main.c.s

# Object files for target 17_ft_strnstr
17_ft_strnstr_OBJECTS = \
"CMakeFiles/17_ft_strnstr.dir/main.c.o"

# External object files for target 17_ft_strnstr
17_ft_strnstr_EXTERNAL_OBJECTS =

17_ft_strnstr: CMakeFiles/17_ft_strnstr.dir/main.c.o
17_ft_strnstr: CMakeFiles/17_ft_strnstr.dir/build.make
17_ft_strnstr: CMakeFiles/17_ft_strnstr.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/fjenae/Desktop/library/libaudit/17_ft_strnstr/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 17_ft_strnstr"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/17_ft_strnstr.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/17_ft_strnstr.dir/build: 17_ft_strnstr

.PHONY : CMakeFiles/17_ft_strnstr.dir/build

CMakeFiles/17_ft_strnstr.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/17_ft_strnstr.dir/cmake_clean.cmake
.PHONY : CMakeFiles/17_ft_strnstr.dir/clean

CMakeFiles/17_ft_strnstr.dir/depend:
	cd /Users/fjenae/Desktop/library/libaudit/17_ft_strnstr/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/fjenae/Desktop/library/libaudit/17_ft_strnstr /Users/fjenae/Desktop/library/libaudit/17_ft_strnstr /Users/fjenae/Desktop/library/libaudit/17_ft_strnstr/cmake-build-debug /Users/fjenae/Desktop/library/libaudit/17_ft_strnstr/cmake-build-debug /Users/fjenae/Desktop/library/libaudit/17_ft_strnstr/cmake-build-debug/CMakeFiles/17_ft_strnstr.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/17_ft_strnstr.dir/depend
