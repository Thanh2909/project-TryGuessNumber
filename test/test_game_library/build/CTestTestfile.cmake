# CMake generated Testfile for 
# Source directory: /home/thanhnguyem/project-TryGuessNumber/test/test_game_library
# Build directory: /home/thanhnguyem/project-TryGuessNumber/test/test_game_library/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(RunTestsRandom "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/build/randomTS")
set_tests_properties(RunTestsRandom PROPERTIES  _BACKTRACE_TRIPLES "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;18;add_test;/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;0;")
add_test(R2 "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/build/randomTS" "--gtest_filter=uniform_int")
set_tests_properties(R2 PROPERTIES  _BACKTRACE_TRIPLES "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;19;add_test;/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;0;")
add_test(R3 "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/build/randomTS" "--gtest_filter=normal")
set_tests_properties(R3 PROPERTIES  _BACKTRACE_TRIPLES "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;20;add_test;/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;0;")
