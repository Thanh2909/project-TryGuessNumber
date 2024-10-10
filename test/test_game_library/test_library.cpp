#include <gtest/gtest.h>
#include "../../data_library/include/game_library.h"

class record_guess_attempt : public ::testing::Test {
protected:
    GameLibrary library;
    void SetUp() override {
        library.guess_attempts.clear();
    }
    // void TearDown() override {
    //     // Cleanup code
    // }
};

class get_average_attempts : public record_guess_attempt {
   // You can add private methods and properties to this class if needed
};

// Check the return value is within the range
TEST(generate_secret_number, WithinBounds) {
    for (int i = 0; i < 1000; ++i) {
        int num = GameLibrary::generate_secret_number(1, 10);
        EXPECT_GE(num, 1);
        EXPECT_LE(num, 10);
    }
}

// Check for negative range
TEST(generate_secret_number, NegativeBounds) {
    for (int i = 0; i < 1000; ++i) {
        int num = GameLibrary::generate_secret_number(-10, 10);
        EXPECT_GE(num, -10);
        EXPECT_LE(num, 10);
    }
}

// Check if lower_bound is equal to upper_bound
TEST(generate_secret_number, EqualBounds) {
    for (int i = 0; i < 1000; ++i) {
        int num = GameLibrary::generate_secret_number(5, 5);
        EXPECT_EQ(num, 5);
    }
}

// Check for randomness
TEST(generate_secret_number, Randomness) {
    std::set<int> nums;
    for (int i = 0; i < 1000; ++i) {
        nums.insert(GameLibrary::generate_secret_number(1, 10));
    }
    EXPECT_GT(nums.size(), 1); 
}

// Check for large distance cases
TEST(generate_secret_number, LargeRange) {
    for (int i = 0; i < 1000; ++i) {
        int num = GameLibrary::generate_secret_number(1, 1000000);
        EXPECT_GE(num, 1);
        EXPECT_LE(num, 1000000);
    }
}

// Check boundary value
TEST(generate_secret_number, BoundaryValues) {
    bool lower_found = false;
    bool upper_found = false;
    for (int i = 0; i < 100000; ++i) {
        int num = GameLibrary::generate_secret_number(1, 10);
        if (num == 1) lower_found = true;
        if (num == 10) upper_found = true;
        if (lower_found && upper_found) break;
    }
    EXPECT_TRUE(lower_found);
    EXPECT_TRUE(upper_found);  // Make sure both boundary values ​​appear
}

// Check the is_correct_guess function
TEST(is_correct_guess, CKCorrectGuess) {
    EXPECT_TRUE(GameLibrary::is_correct_guess(5, 5));
    EXPECT_FALSE(GameLibrary::is_correct_guess(10, 5));
    EXPECT_TRUE(GameLibrary::is_correct_guess(-3, -3));
}

// Check the record_guess_attempt function with a single guess
TEST_F(record_guess_attempt, RecordSingleGuessAttempt) {
    library.record_guess_attempt(3);

    std::vector<int> attempts = library.guess_attempts;
    ASSERT_EQ(attempts.size(), 1);
    EXPECT_EQ(attempts[0], 3);
}

// Check the record_guess_attempt function with multiple guesses
TEST_F(record_guess_attempt, RecordMultipleGuessAttempts) {
    library.record_guess_attempt(3);
    library.record_guess_attempt(5);

    std::vector<int> attempts = library.guess_attempts;
    ASSERT_EQ(attempts.size(), 2);
    EXPECT_EQ(attempts[0], 3);
    EXPECT_EQ(attempts[1], 5);
}

// Check the record_guess_attempt function with boundary values (min and max values)
TEST_F(record_guess_attempt, RecordBoundaryValues) {
    library.record_guess_attempt(0);
    library.record_guess_attempt(1000);

    std::vector<int> attempts = library.guess_attempts;
    ASSERT_EQ(attempts.size(), 2);
    EXPECT_EQ(attempts[0], 0);
    EXPECT_EQ(attempts[1], 1000);
}

// Check the record_guess_attempt function with negative values
TEST_F(record_guess_attempt, RecordNegativeValue) {
    library.guess_attempts.clear();
    library.record_guess_attempt(-1);

    std::vector<int> attempts = library.guess_attempts;
    ASSERT_EQ(attempts.size(), 1);
    EXPECT_EQ(attempts[0], -1);
}

// Test when there are no guesses (empty vector)
TEST_F(get_average_attempts, AverageAttempts_Empty) {
    EXPECT_DOUBLE_EQ(library.get_average_attempts(), 0.0);
}

// Test with a single guess
TEST_F(get_average_attempts, AverageAttempts_Single) {
    library.record_guess_attempt(4);
    EXPECT_DOUBLE_EQ(library.get_average_attempts(), 4.0);
}

// Test with multiple guesses
TEST_F(get_average_attempts, AverageAttempts_Multiple) {
    library.record_guess_attempt(2);
    library.record_guess_attempt(4);
    library.record_guess_attempt(6);
    EXPECT_DOUBLE_EQ(library.get_average_attempts(), 4.0);
}

// Test with boundary guess values
TEST_F(get_average_attempts, AverageAttempts_BoundaryValues) {
    library.record_guess_attempt(1);
    library.record_guess_attempt(10);
    library.record_guess_attempt(10000);
    double expected_average = (1 + 10 + 10000) / 3.0;
    EXPECT_DOUBLE_EQ(library.get_average_attempts(), expected_average);
}



