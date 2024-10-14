#include <iostream>
#include <limits>  
#include <iomanip>
#include <string>
#include <algorithm>
#include "../include/player_data.h"


Playerdata::Playerdata(std::string fn, int a, std::string un, std::string gn, int gp, int tg, double gr)
    : full_name(fn), age(a), username(un), game_name(gn), games_played(gp), total_guesses(tg), guess_rate(gr){}


std::ostream& operator<<(std::ostream& os, const Playerdata& player) {
    // Calculate column width for player information
    int name_width = std::max(25, static_cast<int>(player.full_name.length()));
    int age_width = 4; 
    int username_width = std::max(10, static_cast<int>(player.username.length()));
    int game_name_width = std::max(13, static_cast<int>(player.game_name.length()));
    int games_played_width = 15; 
    int total_guesses_width = 15; 
    int average_attempts_width = 17; 
    // Display the player information panel
    os << "+-----------------------------------------------------------------------------------------------------------------------+" << std::endl;
    os << "| " << std::setw(name_width) << std::left << "       Full Name"
       << " | " << std::setw(age_width) << std::right << "Age"
       << " | " << std::setw(username_width) << std::left << " Username"
       << " | " << std::setw(game_name_width) << std::left << "  Game Name"
       << " | " << std::setw(games_played_width) << std::right << "Games Played "
       << " | " << std::setw(total_guesses_width) << std::right << "Total Guesses " 
       << " | " << std::setw(average_attempts_width) << std::right << "Corect guess rate " << "|" << std::endl;       
    os << "+-----------------------------------------------------------------------------------------------------------------------+" << std::endl;
    os << "| " << std::setw(name_width) << std::left << player.full_name
       << " | " << std::setw(age_width) << std::right << player.age
       << " | " << std::setw(username_width) << std::left << player.username
       << " | " << std::setw(game_name_width) << std::left << player.game_name
       << " | " << std::setw(games_played_width) << std::right << player.games_played
       << " | " << std::setw(total_guesses_width) << std::right << player.total_guesses 
       << " | " << std::setw(average_attempts_width) << std::right << player.guess_rate << " |" << std::endl;       
    os << "+-----------------------------------------------------------------------------------------------------------------------+" << std::endl;
    return os;
}


int display_pause() {
    int choice;
    std::cout << "\n========== Pause ==========" << std::endl;
    std::cout << "1. Continue playing" << std::endl;
    std::cout << "2. Quit game" << std::endl;
    std::cout << "Choose an option: ";
    std::cin >> choice;

    // Handle invalid choice
    while (choice != 1 && choice != 2) {
        std::cout << "Invalid choice. Please choose again (1 or 2): ";
        std::cin >> choice;
    }

    return choice;
}


std::string display_menu() {
    std::string game_name;
    int choice;

    do {
        std::cout << "============= MENU =============" << std::endl;
        std::cout << "Choose your game name:" << std::endl;
        std::cout << "1. Guessing Game" << std::endl;
        std::cout << "2. Crossword Game" << std::endl;
        std::cout << "3. Chess" << std::endl;
        std::cout << "4. Other Option" << std::endl;
        std::cout << "5. Exit Game" << std::endl;

        std::cout << "Enter your choice (1-5): ";
        std::cin >> choice;

        // Check if input is not a number
        if (std::cin.fail()) {
            std::cin.clear();  
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Ignore any remaining characters in the buffer
            std::cout << "Invalid input. Please enter a number between 1 and 5." << std::endl;
            continue;
        }

        // Ignore newline characters after entering a selection
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (choice >= 1 && choice <= 5) {
            
            switch (choice) {
                case 1:
                    game_name = "Guessing Game";
                    std::cout << "Welcome to " << game_name << std::endl;
                    std::cout << "Please enter your information to start." << std::endl;
                    break;
                case 2:
                    game_name = "Crossword Game";
                    std::cout << "Welcome to " << game_name << std::endl;
                    std::cout << "Please enter your information to start." << std::endl;
                    break;
                case 3:
                    game_name = "Chess";
                    std::cout << "Welcome to " << game_name << std::endl;
                    std::cout << "Please enter your information to start." << std::endl;
                    break;
                case 4:
                    std::cout << "Enter your game name: ";
                    std::getline(std::cin, game_name);
                    std::cout << "Welcome to " << game_name << std::endl;
                    std::cout << "Please enter your information to start." << std::endl;
                    break;
                case 5:
                    std::cout << "Exiting the game. Goodbye!" << std::endl;
                    exit(0);
            }
        } else {
            // Notify the user to re-enter
            std::cout << "Invalid choice. Please enter a number between 1 and 5." << std::endl;
        }
    } while (choice < 1 || choice > 5); // Repeat if selection is invalid

    return game_name;
}



