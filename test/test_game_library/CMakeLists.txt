cmake_minimum_required(VERSION 3.10)
project(library_test)

# Add GoogleTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add source files
set(SOURCE_FILES_GL /home/thanhnguyem/project-TryGuessNumber/data_library/src/game_library.cpp)

# Create executable for testing
add_executable(game_library test_library.cpp ${SOURCE_FILES_GL})
# Link Google Test and pthread libraries to the program
target_link_libraries(game_library GTest::gtest_main pthread)
# add_test(NAME test_library COMMAND game_library --gtest_filter= )
add_test(NAME RunTestsGameLibrary  COMMAND game_library)
add_test(NAME L2  COMMAND game_library --gtest_filter=generate_secret_number)
add_test(NAME L3  COMMAND game_library --gtest_filter=is_correct_guess)
add_test(NAME L4  COMMAND game_library --gtest_filter=record_guess_attempt)
add_test(NAME L5  COMMAND game_library --gtest_filter=get_average_attempts)

# Add source files for randomTS
set(RANDOM_SOURCE_FILES /home/thanhnguyem/project-TryGuessNumber/data_library/src/random.cpp)

    # Create executable for random testing
    add_executable(randomTS ${RANDOM_SOURCE_FILES})

    # Link Google Test and pthread libraries to randomTS
    target_link_libraries(randomTS GTest::gtest_main pthread)

    # Add tests for randomTS
    add_test(NAME RunTestsRandom COMMAND randomTS)
    add_test(NAME R2 COMMAND randomTS --gtest_filter=uniform_int)
    add_test(NAME R3 COMMAND randomTS --gtest_filter=normal)

# Enable testing
enable_testing()
