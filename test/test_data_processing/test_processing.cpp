#include <gtest/gtest.h>
#include "../../data_fetching/include/player_data.h"
#include "../../data_library/include/game_library.h"
#include "../../data_processing/include/game.h"

// Mock class to simulate user input
class MockGame : public Game {
public:
    std::vector<int> guesses;
    int current_guess_index;

    MockGame(const std::vector<int>& guesses) : guesses(guesses), current_guess_index(0) {}

    int get_player_guess(){
        if (current_guess_index < guesses.size()) {
            return guesses[current_guess_index++];
        }
        return -1; // Invalid guess if out of bounds
    }
};

TEST(GameTest, CorrectGuessOnFirstTry) {
    Playerdata player("John Doe", 25, "johnny", "Guessing Game", 0, 0);
    MockGame game({50}); // Giả sử số đoán là chính xác ngay lần đầu
    game.start_game(player);
    ASSERT_EQ(GameLibrary::guess_attempts.size(), 1);
    ASSERT_EQ(GameLibrary::guess_attempts[0], 1);
}

// TEST(GameTest, CorrectGuessAfterMultipleTries) {
//     Playerdata player("John Doe", 25, "johnny", "Guessing Game", 0, 0);
//     MockGame game({25, 40, 50}); // Giả sử số đoán chính xác sau 3 lần đoán
//     game.start_game(player);
//     ASSERT_EQ(GameLibrary::guess_attempts.size(), 1);
//     ASSERT_EQ(GameLibrary::guess_attempts[0], 3);
// }

// TEST(GameTest, RecordGuessAttemptCalled) {
//     Playerdata player("John Doe", 25, "johnny", "Guessing Game", 0, 0);
//     MockGame game({50});
//     game.start_game(player);
//     ASSERT_FALSE(GameLibrary::guess_attempts.empty());
// }

// TEST(GameTest, AverageAttemptsCalculatedCorrectly) {
//     Playerdata player("John Doe", 25, "johnny", "Guessing Game", 0, 0);
//     MockGame game1({25, 40, 50});
//     game1.start_game(player);
//     MockGame game2({30, 50});
//     game2.start_game(player);
//     double avg_attempts = GameLibrary::get_average_attempts();
//     ASSERT_NEAR(avg_attempts, 2.0, 0.001); // Tolerance for floating-point comparison
// }

