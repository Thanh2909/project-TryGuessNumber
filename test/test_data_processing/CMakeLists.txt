cmake_minimum_required(VERSION 3.10)
project(library_test)

# Add GoogleTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add source files
set(SOURCE_FILES_PD /home/thanhnguyem/project-TryGuessNumber/data_fetching/src/player_data.cpp)
set(SOURCE_FILES_GL /home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp)
set(SOURCE_FILES_G /home/thanhnguyem/project-TryGuessNumber/data_processing/src/game.cpp)

# Create executable for testing
add_executable(test_processing test_processing.cpp ${SOURCE_FILES_PD} ${SOURCE_FILES_GL} ${SOURCE_FILES_G})

# Link Google Test and pthread libraries to the program
target_link_libraries(test_processing GTest::gtest_main pthread)

# Add test
add_test(NAME RunTestsProcessing COMMAND test_processing)

# Enable testing
enable_testing()
