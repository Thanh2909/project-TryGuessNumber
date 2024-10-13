#include "../include/random.h"
#include <numeric>
#include "../include/game_library.h"


    // Store all guess attempts (for calculating the average)
    std::vector<int> GameLibrary::guess_attempts; // Định nghĩa biến thành viên tĩnh

    // Generate a random secret number within a range
    int GameLibrary::generate_secret_number(int lower_bound, int upper_bound) {
        // Use random_engine to generate a random number
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distr(lower_bound, upper_bound);
        return distr(gen);
    }

    // Check if the player's guess is correct 
    bool GameLibrary::is_correct_guess(int secret_number, int player_guess) {
        return secret_number == player_guess;
    }

    // Record the number of attempts a player made in each round
    void GameLibrary::record_guess_attempt(int attempts) {
        guess_attempts.push_back(attempts);
    }

    // Calculate the average number of attempts over multiple rounds
    double GameLibrary::get_average_attempts() {
        if (guess_attempts.empty()) {
            return 0.0;
        }
        return static_cast<double>(std::accumulate(guess_attempts.begin(), guess_attempts.end(), 0)) / guess_attempts.size();
    }

    void GameLibrary::reset_guess_attempts() {
    guess_attempts.clear();}




