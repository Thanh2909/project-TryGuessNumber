# CMake generated Testfile for 
# Source directory: /home/thanhnguyem/project-TryGuessNumber/test/test_game_library
# Build directory: /home/thanhnguyem/project-TryGuessNumber/test/test_game_library/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(RunTestsGameLibrary "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/build/game_library")
set_tests_properties(RunTestsGameLibrary PROPERTIES  _BACKTRACE_TRIPLES "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;16;add_test;/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;0;")
add_test(L2 "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/build/game_library" "--gtest_filter=generate_secret_number")
set_tests_properties(L2 PROPERTIES  _BACKTRACE_TRIPLES "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;17;add_test;/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;0;")
add_test(L3 "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/build/game_library" "--gtest_filter=is_correct_guess")
set_tests_properties(L3 PROPERTIES  _BACKTRACE_TRIPLES "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;18;add_test;/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;0;")
add_test(L4 "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/build/game_library" "--gtest_filter=record_guess_attempt")
set_tests_properties(L4 PROPERTIES  _BACKTRACE_TRIPLES "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;19;add_test;/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;0;")
add_test(L5 "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/build/game_library" "--gtest_filter=get_average_attempts")
set_tests_properties(L5 PROPERTIES  _BACKTRACE_TRIPLES "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;20;add_test;/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;0;")
add_test(RunTestsRandom "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/build/randomTS")
set_tests_properties(RunTestsRandom PROPERTIES  _BACKTRACE_TRIPLES "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;32;add_test;/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;0;")
add_test(R2 "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/build/randomTS" "--gtest_filter=uniform_int")
set_tests_properties(R2 PROPERTIES  _BACKTRACE_TRIPLES "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;33;add_test;/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;0;")
add_test(R3 "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/build/randomTS" "--gtest_filter=normal")
set_tests_properties(R3 PROPERTIES  _BACKTRACE_TRIPLES "/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;34;add_test;/home/thanhnguyem/project-TryGuessNumber/test/test_game_library/CMakeLists.txt;0;")
