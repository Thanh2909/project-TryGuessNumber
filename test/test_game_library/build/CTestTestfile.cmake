# CMake generated Testfile for 
# Source directory: /home/thanhnguyem/project-TryGuessNumber/test/test_game_library
# Build directory: /home/thanhnguyem/project-TryGuessNumber/test/test_game_library/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(RunTestsMyRandom "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/build/random_test")
set_tests_properties(RunTestsMyRandom PROPERTIES  _BACKTRACE_TRIPLES "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;15;add_test;/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;0;")
add_test(RunTestsGameLibrary "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/build/library_test")
set_tests_properties(RunTestsGameLibrary PROPERTIES  _BACKTRACE_TRIPLES "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;22;add_test;/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;0;")
