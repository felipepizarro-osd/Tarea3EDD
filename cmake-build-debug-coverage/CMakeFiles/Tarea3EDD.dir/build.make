# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\proyectos\Tarea3EDD

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\proyectos\Tarea3EDD\cmake-build-debug-coverage

# Include any dependencies generated for this target.
include CMakeFiles/Tarea3EDD.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Tarea3EDD.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Tarea3EDD.dir/flags.make

CMakeFiles/Tarea3EDD.dir/main.cpp.obj: CMakeFiles/Tarea3EDD.dir/flags.make
CMakeFiles/Tarea3EDD.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\proyectos\Tarea3EDD\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Tarea3EDD.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Tarea3EDD.dir\main.cpp.obj -c E:\proyectos\Tarea3EDD\main.cpp

CMakeFiles/Tarea3EDD.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tarea3EDD.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\proyectos\Tarea3EDD\main.cpp > CMakeFiles\Tarea3EDD.dir\main.cpp.i

CMakeFiles/Tarea3EDD.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tarea3EDD.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\proyectos\Tarea3EDD\main.cpp -o CMakeFiles\Tarea3EDD.dir\main.cpp.s

# Object files for target Tarea3EDD
Tarea3EDD_OBJECTS = \
"CMakeFiles/Tarea3EDD.dir/main.cpp.obj"

# External object files for target Tarea3EDD
Tarea3EDD_EXTERNAL_OBJECTS =

Tarea3EDD.exe: CMakeFiles/Tarea3EDD.dir/main.cpp.obj
Tarea3EDD.exe: CMakeFiles/Tarea3EDD.dir/build.make
Tarea3EDD.exe: CMakeFiles/Tarea3EDD.dir/linklibs.rsp
Tarea3EDD.exe: CMakeFiles/Tarea3EDD.dir/objects1.rsp
Tarea3EDD.exe: CMakeFiles/Tarea3EDD.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\proyectos\Tarea3EDD\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Tarea3EDD.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Tarea3EDD.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Tarea3EDD.dir/build: Tarea3EDD.exe

.PHONY : CMakeFiles/Tarea3EDD.dir/build

CMakeFiles/Tarea3EDD.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Tarea3EDD.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Tarea3EDD.dir/clean

CMakeFiles/Tarea3EDD.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\proyectos\Tarea3EDD E:\proyectos\Tarea3EDD E:\proyectos\Tarea3EDD\cmake-build-debug-coverage E:\proyectos\Tarea3EDD\cmake-build-debug-coverage E:\proyectos\Tarea3EDD\cmake-build-debug-coverage\CMakeFiles\Tarea3EDD.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Tarea3EDD.dir/depend

