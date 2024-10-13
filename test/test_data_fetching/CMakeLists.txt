cmake_minimum_required(VERSION 3.10)
project(library_test)

# Add GoogleTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add source files
set(SOURCE_FILES_PD /home/thanhnguyem/project-TryGuessNumber/data_fetching/src/player_data.cpp)

# Create executable for testing
add_executable(test_player test_player_data.cpp ${SOURCE_FILES_PD})

# Link Google Test and pthread libraries to the program
target_link_libraries(test_player GTest::gtest_main pthread)
# add_test(NAME test_library COMMAND game_library --gtest_filter= )
add_test(NAME RunTestsPlayerData  COMMAND test_player)


# Enable testing
enable_testing()