#ifndef GAME_LIBRARY_H
#define GAME_LIBRARY_H

#include <vector>

class GameLibrary {
public:
    // Function to generate a random secret number within a range
    static int generate_secret_number(int lower_bound, int upper_bound);
    // Function to check if the player's guess is correct
    static bool is_correct_guess(int secret_number, int player_guess);
    // Function to record the number of attempts a player made in each round
    static void record_guess_attempt(int attempts);
    // Function to calculate the average number of attempts over multiple rounds
    static double get_average_attempts();
    static std::vector<int> guess_attempts;
};

#endif // GAME_LIBRARY_H