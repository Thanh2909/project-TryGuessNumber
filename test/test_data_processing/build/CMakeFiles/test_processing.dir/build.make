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
CMAKE_SOURCE_DIR = /home/thanhnguyem/project-TryGuessNumber/test/test_data_processing

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/thanhnguyem/project-TryGuessNumber/test/test_data_processing/build

# Include any dependencies generated for this target.
include CMakeFiles/test_processing.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test_processing.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test_processing.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_processing.dir/flags.make

CMakeFiles/test_processing.dir/test_processing.cpp.o: CMakeFiles/test_processing.dir/flags.make
CMakeFiles/test_processing.dir/test_processing.cpp.o: /home/thanhnguyem/project-TryGuessNumber/test/test_data_processing/test_processing.cpp
CMakeFiles/test_processing.dir/test_processing.cpp.o: CMakeFiles/test_processing.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/thanhnguyem/project-TryGuessNumber/test/test_data_processing/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_processing.dir/test_processing.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_processing.dir/test_processing.cpp.o -MF CMakeFiles/test_processing.dir/test_processing.cpp.o.d -o CMakeFiles/test_processing.dir/test_processing.cpp.o -c /home/thanhnguyem/project-TryGuessNumber/test/test_data_processing/test_processing.cpp

CMakeFiles/test_processing.dir/test_processing.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_processing.dir/test_processing.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/thanhnguyem/project-TryGuessNumber/test/test_data_processing/test_processing.cpp > CMakeFiles/test_processing.dir/test_processing.cpp.i

CMakeFiles/test_processing.dir/test_processing.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_processing.dir/test_processing.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/thanhnguyem/project-TryGuessNumber/test/test_data_processing/test_processing.cpp -o CMakeFiles/test_processing.dir/test_processing.cpp.s

CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_fetching/src/player_data.cpp.o: CMakeFiles/test_processing.dir/flags.make
CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_fetching/src/player_data.cpp.o: /home/thanhnguyem/project-TryGuessNumber/data_fetching/src/player_data.cpp
CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_fetching/src/player_data.cpp.o: CMakeFiles/test_processing.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/thanhnguyem/project-TryGuessNumber/test/test_data_processing/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_fetching/src/player_data.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_fetching/src/player_data.cpp.o -MF CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_fetching/src/player_data.cpp.o.d -o CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_fetching/src/player_data.cpp.o -c /home/thanhnguyem/project-TryGuessNumber/data_fetching/src/player_data.cpp

CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_fetching/src/player_data.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_fetching/src/player_data.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/thanhnguyem/project-TryGuessNumber/data_fetching/src/player_data.cpp > CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_fetching/src/player_data.cpp.i

CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_fetching/src/player_data.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_fetching/src/player_data.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/thanhnguyem/project-TryGuessNumber/data_fetching/src/player_data.cpp -o CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_fetching/src/player_data.cpp.s

CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp.o: CMakeFiles/test_processing.dir/flags.make
CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp.o: /home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp
CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp.o: CMakeFiles/test_processing.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/thanhnguyem/project-TryGuessNumber/test/test_data_processing/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp.o -MF CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp.o.d -o CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp.o -c /home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp

CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp > CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp.i

CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp -o CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp.s

CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_processing/src/game.cpp.o: CMakeFiles/test_processing.dir/flags.make
CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_processing/src/game.cpp.o: /home/thanhnguyem/project-TryGuessNumber/data_processing/src/game.cpp
CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_processing/src/game.cpp.o: CMakeFiles/test_processing.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/thanhnguyem/project-TryGuessNumber/test/test_data_processing/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_processing/src/game.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_processing/src/game.cpp.o -MF CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_processing/src/game.cpp.o.d -o CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_processing/src/game.cpp.o -c /home/thanhnguyem/project-TryGuessNumber/data_processing/src/game.cpp

CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_processing/src/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_processing/src/game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/thanhnguyem/project-TryGuessNumber/data_processing/src/game.cpp > CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_processing/src/game.cpp.i

CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_processing/src/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_processing/src/game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/thanhnguyem/project-TryGuessNumber/data_processing/src/game.cpp -o CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_processing/src/game.cpp.s

# Object files for target test_processing
test_processing_OBJECTS = \
"CMakeFiles/test_processing.dir/test_processing.cpp.o" \
"CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_fetching/src/player_data.cpp.o" \
"CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp.o" \
"CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_processing/src/game.cpp.o"

# External object files for target test_processing
test_processing_EXTERNAL_OBJECTS =

test_processing: CMakeFiles/test_processing.dir/test_processing.cpp.o
test_processing: CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_fetching/src/player_data.cpp.o
test_processing: CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp.o
test_processing: CMakeFiles/test_processing.dir/home/thanhnguyem/project-TryGuessNumber/data_processing/src/game.cpp.o
test_processing: CMakeFiles/test_processing.dir/build.make
test_processing: /usr/local/lib/libgtest_main.a
test_processing: /usr/local/lib/libgtest.a
test_processing: CMakeFiles/test_processing.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/thanhnguyem/project-TryGuessNumber/test/test_data_processing/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable test_processing"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_processing.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_processing.dir/build: test_processing
.PHONY : CMakeFiles/test_processing.dir/build

CMakeFiles/test_processing.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_processing.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_processing.dir/clean

CMakeFiles/test_processing.dir/depend:
	cd /home/thanhnguyem/project-TryGuessNumber/test/test_data_processing/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/thanhnguyem/project-TryGuessNumber/test/test_data_processing /home/thanhnguyem/project-TryGuessNumber/test/test_data_processing /home/thanhnguyem/project-TryGuessNumber/test/test_data_processing/build /home/thanhnguyem/project-TryGuessNumber/test/test_data_processing/build /home/thanhnguyem/project-TryGuessNumber/test/test_data_processing/build/CMakeFiles/test_processing.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/test_processing.dir/depend

