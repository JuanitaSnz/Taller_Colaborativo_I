# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Asus\Documents\UPTC Quinto Semestre\Programacion III\C - C++\Taller C\Taller_Colaborativo_I"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Asus\Documents\UPTC Quinto Semestre\Programacion III\C - C++\Taller C\Taller_Colaborativo_I\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Taller_ColaborativoC.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Taller_ColaborativoC.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Taller_ColaborativoC.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Taller_ColaborativoC.dir/flags.make

CMakeFiles/Taller_ColaborativoC.dir/main.c.obj: CMakeFiles/Taller_ColaborativoC.dir/flags.make
CMakeFiles/Taller_ColaborativoC.dir/main.c.obj: ../main.c
CMakeFiles/Taller_ColaborativoC.dir/main.c.obj: CMakeFiles/Taller_ColaborativoC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Asus\Documents\UPTC Quinto Semestre\Programacion III\C - C++\Taller C\Taller_Colaborativo_I\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Taller_ColaborativoC.dir/main.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Taller_ColaborativoC.dir/main.c.obj -MF CMakeFiles\Taller_ColaborativoC.dir\main.c.obj.d -o CMakeFiles\Taller_ColaborativoC.dir\main.c.obj -c "C:\Users\Asus\Documents\UPTC Quinto Semestre\Programacion III\C - C++\Taller C\Taller_Colaborativo_I\main.c"

CMakeFiles/Taller_ColaborativoC.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Taller_ColaborativoC.dir/main.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Asus\Documents\UPTC Quinto Semestre\Programacion III\C - C++\Taller C\Taller_Colaborativo_I\main.c" > CMakeFiles\Taller_ColaborativoC.dir\main.c.i

CMakeFiles/Taller_ColaborativoC.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Taller_ColaborativoC.dir/main.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Asus\Documents\UPTC Quinto Semestre\Programacion III\C - C++\Taller C\Taller_Colaborativo_I\main.c" -o CMakeFiles\Taller_ColaborativoC.dir\main.c.s

# Object files for target Taller_ColaborativoC
Taller_ColaborativoC_OBJECTS = \
"CMakeFiles/Taller_ColaborativoC.dir/main.c.obj"

# External object files for target Taller_ColaborativoC
Taller_ColaborativoC_EXTERNAL_OBJECTS =

Taller_ColaborativoC.exe: CMakeFiles/Taller_ColaborativoC.dir/main.c.obj
Taller_ColaborativoC.exe: CMakeFiles/Taller_ColaborativoC.dir/build.make
Taller_ColaborativoC.exe: CMakeFiles/Taller_ColaborativoC.dir/linklibs.rsp
Taller_ColaborativoC.exe: CMakeFiles/Taller_ColaborativoC.dir/objects1.rsp
Taller_ColaborativoC.exe: CMakeFiles/Taller_ColaborativoC.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Asus\Documents\UPTC Quinto Semestre\Programacion III\C - C++\Taller C\Taller_Colaborativo_I\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Taller_ColaborativoC.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Taller_ColaborativoC.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Taller_ColaborativoC.dir/build: Taller_ColaborativoC.exe
.PHONY : CMakeFiles/Taller_ColaborativoC.dir/build

CMakeFiles/Taller_ColaborativoC.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Taller_ColaborativoC.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Taller_ColaborativoC.dir/clean

CMakeFiles/Taller_ColaborativoC.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Asus\Documents\UPTC Quinto Semestre\Programacion III\C - C++\Taller C\Taller_Colaborativo_I" "C:\Users\Asus\Documents\UPTC Quinto Semestre\Programacion III\C - C++\Taller C\Taller_Colaborativo_I" "C:\Users\Asus\Documents\UPTC Quinto Semestre\Programacion III\C - C++\Taller C\Taller_Colaborativo_I\cmake-build-debug" "C:\Users\Asus\Documents\UPTC Quinto Semestre\Programacion III\C - C++\Taller C\Taller_Colaborativo_I\cmake-build-debug" "C:\Users\Asus\Documents\UPTC Quinto Semestre\Programacion III\C - C++\Taller C\Taller_Colaborativo_I\cmake-build-debug\CMakeFiles\Taller_ColaborativoC.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Taller_ColaborativoC.dir/depend

