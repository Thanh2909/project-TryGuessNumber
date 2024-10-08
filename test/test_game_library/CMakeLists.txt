cmake_minimum_required(VERSION 3.10)
project(my_test)

# Find GoogleTest
find_package(GTest REQUIRED)

# Add the path to the directory
include_directories(../data_library/src)

# create executable for random_test
# Add your source file 
add_executable(random_test test-random.cpp)
# Link Google Test and pthread libraries to the program
target_link_libraries(random_test GTest::gtest_main pthread)
add_test(NAME RunTestsMyRandom COMMAND random_test)

# create executable for library_test
# Add your source file
add_executable(library_test test-game-library.cpp)
# Link Google Test and pthread libraries to the program
target_link_libraries(library_test GTest::gtest_main pthread)
add_test(NAME RunTestsGameLibrary COMMAND library_test)

#enable_testing
enable_testing()