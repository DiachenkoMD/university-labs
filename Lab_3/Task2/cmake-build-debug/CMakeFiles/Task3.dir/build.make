# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Projects\C++\University\university-labs-diachenko\Lab_3\Task2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Projects\C++\University\university-labs-diachenko\Lab_3\Task2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Task3.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Task3.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Task3.dir\flags.make

CMakeFiles\Task3.dir\main.cpp.obj: CMakeFiles\Task3.dir\flags.make
CMakeFiles\Task3.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Projects\C++\University\university-labs-diachenko\Lab_3\Task2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Task3.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Task3.dir\main.cpp.obj /FdCMakeFiles\Task3.dir\ /FS -c D:\Projects\C++\University\university-labs-diachenko\Lab_3\Task2\main.cpp
<<

CMakeFiles\Task3.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Task3.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\Task3.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Projects\C++\University\university-labs-diachenko\Lab_3\Task2\main.cpp
<<

CMakeFiles\Task3.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Task3.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Task3.dir\main.cpp.s /c D:\Projects\C++\University\university-labs-diachenko\Lab_3\Task2\main.cpp
<<

# Object files for target Task3
Task3_OBJECTS = \
"CMakeFiles\Task3.dir\main.cpp.obj"

# External object files for target Task3
Task3_EXTERNAL_OBJECTS =

Task3.exe: CMakeFiles\Task3.dir\main.cpp.obj
Task3.exe: CMakeFiles\Task3.dir\build.make
Task3.exe: CMakeFiles\Task3.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Projects\C++\University\university-labs-diachenko\Lab_3\Task2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Task3.exe"
	"C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Task3.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Task3.dir\objects1.rsp @<<
 /out:Task3.exe /implib:Task3.lib /pdb:D:\Projects\C++\University\university-labs-diachenko\Lab_3\Task2\cmake-build-debug\Task3.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Task3.dir\build: Task3.exe

.PHONY : CMakeFiles\Task3.dir\build

CMakeFiles\Task3.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Task3.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Task3.dir\clean

CMakeFiles\Task3.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\Projects\C++\University\university-labs-diachenko\Lab_3\Task2 D:\Projects\C++\University\university-labs-diachenko\Lab_3\Task2 D:\Projects\C++\University\university-labs-diachenko\Lab_3\Task2\cmake-build-debug D:\Projects\C++\University\university-labs-diachenko\Lab_3\Task2\cmake-build-debug D:\Projects\C++\University\university-labs-diachenko\Lab_3\Task2\cmake-build-debug\CMakeFiles\Task3.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Task3.dir\depend

