#include <gtest/gtest.h>
#include "../../data_fetching/include/player_data.h"
#include "../../data_library/include/game_library.h"
#include "../../data_processing/include/game.h"
#include <iostream>
#include <sstream>

// Mock class to simulate user input
class MockGame : public Game {
public:
    std::vector<int> guesses;
    int current_guess_index;
    std::ostringstream output; // Stream to capture output

    MockGame(const std::vector<int>& guesses) : guesses(guesses), current_guess_index(0) {}

    int get_player_guess() {
        if (current_guess_index < guesses.size()) {
            return guesses[current_guess_index++];
        }
        return -1; // Invalid guess if out of bounds
    }

    void start_game(const Playerdata& player) {
        int secret_number = 25; // Fixed secret number
        int attempts = 0;
        int guess = 0;
        output << "Alright, " << player.username << ". I have picked a number between 1 and 100. Try to guess it!" << std::endl;
        while (true) {
            guess = get_player_guess();
            ++attempts;
            if (GameLibrary::is_correct_guess(secret_number, guess)) {
                output << "Congratulations, " << player.username << "! You've guessed correctly in " << attempts << " tries." << std::endl;
                GameLibrary::record_guess_attempt(attempts); // Ghi lại số lần đoán
                break;
            } else if (guess < secret_number) {
                output << "Too low! Try again." << std::endl;
            } else {
                output << "Too high! Try again." << std::endl;
            }
        }
        double avg_attempts = GameLibrary::get_average_attempts();
        output << "Your average number of attempts across all games is: " << avg_attempts << std::endl;
    }
};

TEST(GameTest, CorrectGuessOnFirstTry) {
    Playerdata player("THANH NGUYEN", 25, "TONY", "Guessing Game", 0, 0,0);
    MockGame game({25}); // Giả sử số đoán là 25 ngay lần đầu tiên
    game.start_game(player);

    std::string expected_output = "Alright, TONY. I have picked a number between 1 and 100. Try to guess it!\n"
                                  "Congratulations, TONY! You've guessed correctly in 1 tries.\n"
                                  "Your average number of attempts across all games is: 1\n";

    EXPECT_EQ(game.output.str(), expected_output);
}

TEST(GameTest, RecordGuessAttemptCalled) {
    Playerdata player("THANH NGUYEN", 25, "TONY", "Guessing Game", 0, 0,0);
    MockGame game({25}); // Giả sử số đoán là 25 ngay lần đầu tiên
    game.start_game(player);

    ASSERT_FALSE(GameLibrary::guess_attempts.empty());
    ASSERT_EQ(GameLibrary::guess_attempts[0], 1);
}

TEST(GameTest, AverageAttemptsCalculatedCorrectly) {
    GameLibrary::guess_attempts.clear();
    Playerdata player("THANH NGUYEN", 25, "TONY", "Guessing Game", 0, 0,0);
    MockGame game1({0,25}); // Lần chơi thứ nhất, đoán đúng sau 2 lần
    game1.start_game(player);
    
    MockGame game2({2,23,7,20,25}); // Lần chơi thứ hai, đoán đúng sau 5 lần
    game2.start_game(player);
    
    double avg_attempts = GameLibrary::get_average_attempts();
    ASSERT_NEAR(avg_attempts, 3.5, 0.001); // Độ chính xác khi so sánh số thực
}


