# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2017.2.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2017.2.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Code\CLAB\workcode\7th\7_4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Code\CLAB\workcode\7th\7_4\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/7_4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/7_4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/7_4.dir/flags.make

CMakeFiles/7_4.dir/main.c.obj: CMakeFiles/7_4.dir/flags.make
CMakeFiles/7_4.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Code\CLAB\workcode\7th\7_4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/7_4.dir/main.c.obj"
	C:\LLVM\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\7_4.dir\main.c.obj   -c D:\Code\CLAB\workcode\7th\7_4\main.c

CMakeFiles/7_4.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/7_4.dir/main.c.i"
	C:\LLVM\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Code\CLAB\workcode\7th\7_4\main.c > CMakeFiles\7_4.dir\main.c.i

CMakeFiles/7_4.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/7_4.dir/main.c.s"
	C:\LLVM\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Code\CLAB\workcode\7th\7_4\main.c -o CMakeFiles\7_4.dir\main.c.s

CMakeFiles/7_4.dir/main.c.obj.requires:

.PHONY : CMakeFiles/7_4.dir/main.c.obj.requires

CMakeFiles/7_4.dir/main.c.obj.provides: CMakeFiles/7_4.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\7_4.dir\build.make CMakeFiles/7_4.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/7_4.dir/main.c.obj.provides

CMakeFiles/7_4.dir/main.c.obj.provides.build: CMakeFiles/7_4.dir/main.c.obj


CMakeFiles/7_4.dir/function.c.obj: CMakeFiles/7_4.dir/flags.make
CMakeFiles/7_4.dir/function.c.obj: ../function.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Code\CLAB\workcode\7th\7_4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/7_4.dir/function.c.obj"
	C:\LLVM\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\7_4.dir\function.c.obj   -c D:\Code\CLAB\workcode\7th\7_4\function.c

CMakeFiles/7_4.dir/function.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/7_4.dir/function.c.i"
	C:\LLVM\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Code\CLAB\workcode\7th\7_4\function.c > CMakeFiles\7_4.dir\function.c.i

CMakeFiles/7_4.dir/function.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/7_4.dir/function.c.s"
	C:\LLVM\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Code\CLAB\workcode\7th\7_4\function.c -o CMakeFiles\7_4.dir\function.c.s

CMakeFiles/7_4.dir/function.c.obj.requires:

.PHONY : CMakeFiles/7_4.dir/function.c.obj.requires

CMakeFiles/7_4.dir/function.c.obj.provides: CMakeFiles/7_4.dir/function.c.obj.requires
	$(MAKE) -f CMakeFiles\7_4.dir\build.make CMakeFiles/7_4.dir/function.c.obj.provides.build
.PHONY : CMakeFiles/7_4.dir/function.c.obj.provides

CMakeFiles/7_4.dir/function.c.obj.provides.build: CMakeFiles/7_4.dir/function.c.obj


# Object files for target 7_4
7_4_OBJECTS = \
"CMakeFiles/7_4.dir/main.c.obj" \
"CMakeFiles/7_4.dir/function.c.obj"

# External object files for target 7_4
7_4_EXTERNAL_OBJECTS =

7_4.exe: CMakeFiles/7_4.dir/main.c.obj
7_4.exe: CMakeFiles/7_4.dir/function.c.obj
7_4.exe: CMakeFiles/7_4.dir/build.make
7_4.exe: CMakeFiles/7_4.dir/linklibs.rsp
7_4.exe: CMakeFiles/7_4.dir/objects1.rsp
7_4.exe: CMakeFiles/7_4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Code\CLAB\workcode\7th\7_4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable 7_4.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\7_4.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/7_4.dir/build: 7_4.exe

.PHONY : CMakeFiles/7_4.dir/build

CMakeFiles/7_4.dir/requires: CMakeFiles/7_4.dir/main.c.obj.requires
CMakeFiles/7_4.dir/requires: CMakeFiles/7_4.dir/function.c.obj.requires

.PHONY : CMakeFiles/7_4.dir/requires

CMakeFiles/7_4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\7_4.dir\cmake_clean.cmake
.PHONY : CMakeFiles/7_4.dir/clean

CMakeFiles/7_4.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Code\CLAB\workcode\7th\7_4 D:\Code\CLAB\workcode\7th\7_4 D:\Code\CLAB\workcode\7th\7_4\cmake-build-debug D:\Code\CLAB\workcode\7th\7_4\cmake-build-debug D:\Code\CLAB\workcode\7th\7_4\cmake-build-debug\CMakeFiles\7_4.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/7_4.dir/depend
