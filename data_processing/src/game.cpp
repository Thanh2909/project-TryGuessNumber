#include <iostream>
#include <utility>
#include <limits>
#include "../../data_fetching/include/player_data.h"
#include "../../data_library/include/game_library.h"
#include "../include/game.h"

int Game::get_player_guess() {
    int guess;
    while (true) {
        std::cout << "Your guess: ";
        std::cin >> guess;

        // Check if input failed (user entered non-numeric characters)
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore any remaining characters in the buffer
            std::cout << "Invalid input. Please enter a number." << std::endl;
        } else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore extra characters after entering numbers
            return guess;
        }
    }
}


std::pair<int, double> Game::start_game(const Playerdata& player) {
    int secret_number = GameLibrary::generate_secret_number(1, 100); // Generate a random number between 1 and 100
    int attempts = 0;
    int guess = 0;
    std::cout << "Alright, " << player.username << ". I have picked a number between 1 and 100. Try to guess it!" << std::endl;
    
    while (true) {
        do {
           guess = get_player_guess(); 
         } while (guess == -1);
        ++attempts;
        
        if (GameLibrary::is_correct_guess(secret_number, guess)) {
            std::cout << "Congratulations, " << player.username << "! You've guessed correctly in " << attempts << " tries." << std::endl;
            GameLibrary::record_guess_attempt(attempts); // Record the number of attempts
            break; // Exit the loop when the guess is correct
        } else if (guess < secret_number) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Too high! Try again." << std::endl;
        }
    }
    
    // Print the average number of attempts from previous games
    double avg_attempts = GameLibrary::get_average_attempts();
    std::cout << "Your average number of attempts across all games is: " << avg_attempts << std::endl;

    return std::make_pair(attempts, avg_attempts);
}
