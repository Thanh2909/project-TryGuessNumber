#include <gtest/gtest.h>
#include "../../data_library/src/game_library.h"

// Test the random number generator function of game_library
TEST(GameLibraryTest, GenerateSecretNumberTest) {
    int lower = 1;
    int upper = 100;
    int secret = GameLibrary::generate_secret_number(lower, upper);
    
    // Check if the secret number is within the required range
    ASSERT_GE(secret, lower);  // secret >= lower
    ASSERT_LE(secret, upper);  // secret <= upper
}

// Test the function that checks for the correct guess
TEST(GameLibraryTest, IsCorrectGuessTest) {
    int secret = 42;
    
    // Correct guess
    ASSERT_TRUE(GameLibrary::is_correct_guess(secret, 42));
    
    // Incorrect guess
    ASSERT_FALSE(GameLibrary::is_correct_guess(secret, 40));
}

// Test the function that records the number of attempts and calculates the average
TEST(GameLibraryTest, RecordAndAverageAttemptsTest) {
    GameLibrary::record_guess_attempt(5);
    GameLibrary::record_guess_attempt(7);

    // Calculate the average after 2 rounds
    double avg = GameLibrary::get_average_attempts();
    ASSERT_NEAR(avg, 6.0, 0.01); // Average value should be close to 6.0 (allowed error ~0.01)
}
