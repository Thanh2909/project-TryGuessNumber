#include <iostream>
#include "../../data_fetching/include/player_data.h"
#include "../../data_library/include/game_library.h"
#include "../include/game.h"

    void Game::start_game(const Playerdata& player) {
        int secret_number = GameLibrary::generate_secret_number(1, 100);
        int attempts = 0;
        int guess = 0;
        std::cout << "Alright, " << player.full_name << ". I have picked a number between 1 and 100. Try to guess it!" << std::endl;
        while (true) {
            std::cout << "Your guess: ";
            std::cin >> guess;
            ++attempts;
            if (GameLibrary::is_correct_guess(secret_number, guess)) {
                std::cout << "Congratulations, " << player.full_name << "! You've guessed correctly in " << attempts << " tries." << std::endl;
                GameLibrary::record_guess_attempt(attempts);
                break;
            } else if (guess < secret_number) {
                std::cout << "Too low! Try again." << std::endl;
            } else {
                std::cout << "Too high! Try again." << std::endl;
            }
        }
        double avg_attempts = GameLibrary::get_average_attempts();
        std::cout << "Your average number of attempts across all games is: " << avg_attempts << std::endl;
    }

