#ifndef game_library_H
#define game_library_H

#include <vector>
#include <numeric>

namespace GameLibrary {

    // Store all guess attempts (for calculating the average)
    std::vector<int> guess_attempts;

    // Function to generate a random secret number within a range
    int generate_secret_number(int lower_bound, int upper_bound);

    // Function to check if the player's guess is correct
    bool is_correct_guess(int secret_number, int player_guess);

    // Function to record the number of attempts a player made in each round
    void record_guess_attempt(int attempts);

    // Function to calculate the average number of attempts over multiple rounds
    double get_average_attempts();

} // namespace GameLibrary

#endif