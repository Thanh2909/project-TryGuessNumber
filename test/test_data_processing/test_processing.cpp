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

