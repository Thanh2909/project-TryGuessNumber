# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/thanhnguyem/project-TryGuessNumber

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/thanhnguyem/project-TryGuessNumber/Build_Project

# Include any dependencies generated for this target.
include CMakeFiles/test_gamelibrary.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test_gamelibrary.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test_gamelibrary.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_gamelibrary.dir/flags.make

CMakeFiles/test_gamelibrary.dir/test/test_game_library/test_library.cpp.o: CMakeFiles/test_gamelibrary.dir/flags.make
CMakeFiles/test_gamelibrary.dir/test/test_game_library/test_library.cpp.o: /home/thanhnguyem/project-TryGuessNumber/test/test_game_library/test_library.cpp
CMakeFiles/test_gamelibrary.dir/test/test_game_library/test_library.cpp.o: CMakeFiles/test_gamelibrary.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/thanhnguyem/project-TryGuessNumber/Build_Project/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_gamelibrary.dir/test/test_game_library/test_library.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_gamelibrary.dir/test/test_game_library/test_library.cpp.o -MF CMakeFiles/test_gamelibrary.dir/test/test_game_library/test_library.cpp.o.d -o CMakeFiles/test_gamelibrary.dir/test/test_game_library/test_library.cpp.o -c /home/thanhnguyem/project-TryGuessNumber/test/test_game_library/test_library.cpp

CMakeFiles/test_gamelibrary.dir/test/test_game_library/test_library.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_gamelibrary.dir/test/test_game_library/test_library.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/thanhnguyem/project-TryGuessNumber/test/test_game_library/test_library.cpp > CMakeFiles/test_gamelibrary.dir/test/test_game_library/test_library.cpp.i

CMakeFiles/test_gamelibrary.dir/test/test_game_library/test_library.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_gamelibrary.dir/test/test_game_library/test_library.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/thanhnguyem/project-TryGuessNumber/test/test_game_library/test_library.cpp -o CMakeFiles/test_gamelibrary.dir/test/test_game_library/test_library.cpp.s

CMakeFiles/test_gamelibrary.dir/data_library/src/game_library.cpp.o: CMakeFiles/test_gamelibrary.dir/flags.make
CMakeFiles/test_gamelibrary.dir/data_library/src/game_library.cpp.o: /home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp
CMakeFiles/test_gamelibrary.dir/data_library/src/game_library.cpp.o: CMakeFiles/test_gamelibrary.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/thanhnguyem/project-TryGuessNumber/Build_Project/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/test_gamelibrary.dir/data_library/src/game_library.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_gamelibrary.dir/data_library/src/game_library.cpp.o -MF CMakeFiles/test_gamelibrary.dir/data_library/src/game_library.cpp.o.d -o CMakeFiles/test_gamelibrary.dir/data_library/src/game_library.cpp.o -c /home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp

CMakeFiles/test_gamelibrary.dir/data_library/src/game_library.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_gamelibrary.dir/data_library/src/game_library.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp > CMakeFiles/test_gamelibrary.dir/data_library/src/game_library.cpp.i

CMakeFiles/test_gamelibrary.dir/data_library/src/game_library.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_gamelibrary.dir/data_library/src/game_library.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp -o CMakeFiles/test_gamelibrary.dir/data_library/src/game_library.cpp.s

# Object files for target test_gamelibrary
test_gamelibrary_OBJECTS = \
"CMakeFiles/test_gamelibrary.dir/test/test_game_library/test_library.cpp.o" \
"CMakeFiles/test_gamelibrary.dir/data_library/src/game_library.cpp.o"

# External object files for target test_gamelibrary
test_gamelibrary_EXTERNAL_OBJECTS =

test_gamelibrary: CMakeFiles/test_gamelibrary.dir/test/test_game_library/test_library.cpp.o
test_gamelibrary: CMakeFiles/test_gamelibrary.dir/data_library/src/game_library.cpp.o
test_gamelibrary: CMakeFiles/test_gamelibrary.dir/build.make
test_gamelibrary: /usr/local/lib/libgtest_main.a
test_gamelibrary: /usr/local/lib/libgtest.a
test_gamelibrary: CMakeFiles/test_gamelibrary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/thanhnguyem/project-TryGuessNumber/Build_Project/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable test_gamelibrary"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_gamelibrary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_gamelibrary.dir/build: test_gamelibrary
.PHONY : CMakeFiles/test_gamelibrary.dir/build

CMakeFiles/test_gamelibrary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_gamelibrary.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_gamelibrary.dir/clean

CMakeFiles/test_gamelibrary.dir/depend:
	cd /home/thanhnguyem/project-TryGuessNumber/Build_Project && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/thanhnguyem/project-TryGuessNumber /home/thanhnguyem/project-TryGuessNumber /home/thanhnguyem/project-TryGuessNumber/Build_Project /home/thanhnguyem/project-TryGuessNumber/Build_Project /home/thanhnguyem/project-TryGuessNumber/Build_Project/CMakeFiles/test_gamelibrary.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/test_gamelibrary.dir/depend

