# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

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
CMAKE_SOURCE_DIR = D:\Code\CLab\workcode\third\3_5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Code\CLab\workcode\third\3_5\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/3_5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/3_5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/3_5.dir/flags.make

CMakeFiles/3_5.dir/file1.c.obj: CMakeFiles/3_5.dir/flags.make
CMakeFiles/3_5.dir/file1.c.obj: ../file1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Code\CLab\workcode\third\3_5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/3_5.dir/file1.c.obj"
	C:\LLVM\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\3_5.dir\file1.c.obj   -c D:\Code\CLab\workcode\third\3_5\file1.c

CMakeFiles/3_5.dir/file1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/3_5.dir/file1.c.i"
	C:\LLVM\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Code\CLab\workcode\third\3_5\file1.c > CMakeFiles\3_5.dir\file1.c.i

CMakeFiles/3_5.dir/file1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/3_5.dir/file1.c.s"
	C:\LLVM\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Code\CLab\workcode\third\3_5\file1.c -o CMakeFiles\3_5.dir\file1.c.s

CMakeFiles/3_5.dir/file1.c.obj.requires:

.PHONY : CMakeFiles/3_5.dir/file1.c.obj.requires

CMakeFiles/3_5.dir/file1.c.obj.provides: CMakeFiles/3_5.dir/file1.c.obj.requires
	$(MAKE) -f CMakeFiles\3_5.dir\build.make CMakeFiles/3_5.dir/file1.c.obj.provides.build
.PHONY : CMakeFiles/3_5.dir/file1.c.obj.provides

CMakeFiles/3_5.dir/file1.c.obj.provides.build: CMakeFiles/3_5.dir/file1.c.obj


CMakeFiles/3_5.dir/file2.c.obj: CMakeFiles/3_5.dir/flags.make
CMakeFiles/3_5.dir/file2.c.obj: ../file2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Code\CLab\workcode\third\3_5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/3_5.dir/file2.c.obj"
	C:\LLVM\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\3_5.dir\file2.c.obj   -c D:\Code\CLab\workcode\third\3_5\file2.c

CMakeFiles/3_5.dir/file2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/3_5.dir/file2.c.i"
	C:\LLVM\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Code\CLab\workcode\third\3_5\file2.c > CMakeFiles\3_5.dir\file2.c.i

CMakeFiles/3_5.dir/file2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/3_5.dir/file2.c.s"
	C:\LLVM\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Code\CLab\workcode\third\3_5\file2.c -o CMakeFiles\3_5.dir\file2.c.s

CMakeFiles/3_5.dir/file2.c.obj.requires:

.PHONY : CMakeFiles/3_5.dir/file2.c.obj.requires

CMakeFiles/3_5.dir/file2.c.obj.provides: CMakeFiles/3_5.dir/file2.c.obj.requires
	$(MAKE) -f CMakeFiles\3_5.dir\build.make CMakeFiles/3_5.dir/file2.c.obj.provides.build
.PHONY : CMakeFiles/3_5.dir/file2.c.obj.provides

CMakeFiles/3_5.dir/file2.c.obj.provides.build: CMakeFiles/3_5.dir/file2.c.obj


# Object files for target 3_5
3_5_OBJECTS = \
"CMakeFiles/3_5.dir/file1.c.obj" \
"CMakeFiles/3_5.dir/file2.c.obj"

# External object files for target 3_5
3_5_EXTERNAL_OBJECTS =

3_5.exe: CMakeFiles/3_5.dir/file1.c.obj
3_5.exe: CMakeFiles/3_5.dir/file2.c.obj
3_5.exe: CMakeFiles/3_5.dir/build.make
3_5.exe: CMakeFiles/3_5.dir/linklibs.rsp
3_5.exe: CMakeFiles/3_5.dir/objects1.rsp
3_5.exe: CMakeFiles/3_5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Code\CLab\workcode\third\3_5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable 3_5.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\3_5.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/3_5.dir/build: 3_5.exe

.PHONY : CMakeFiles/3_5.dir/build

CMakeFiles/3_5.dir/requires: CMakeFiles/3_5.dir/file1.c.obj.requires
CMakeFiles/3_5.dir/requires: CMakeFiles/3_5.dir/file2.c.obj.requires

.PHONY : CMakeFiles/3_5.dir/requires

CMakeFiles/3_5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\3_5.dir\cmake_clean.cmake
.PHONY : CMakeFiles/3_5.dir/clean

CMakeFiles/3_5.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Code\CLab\workcode\third\3_5 D:\Code\CLab\workcode\third\3_5 D:\Code\CLab\workcode\third\3_5\cmake-build-debug D:\Code\CLab\workcode\third\3_5\cmake-build-debug D:\Code\CLab\workcode\third\3_5\cmake-build-debug\CMakeFiles\3_5.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/3_5.dir/depend

