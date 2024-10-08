#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>

class Player {
public:
    std::string full_name;
    int age;
    std::string username;
    std::string game_name;
    int games_played;
    int total_guesses;

    Player(std::string name, int player_age, std::string game_username, std::string game)
        : full_name(name), age(player_age), game_name(game), username(game_username), games_played(0), total_guesses(0) {}

    // Define the << operator to display player information
    friend std::ostream& operator<<(std::ostream& os, const Player& player) {
        // Calculate column widths for player information
        int name_width = std::max(25, static_cast<int>(player.full_name.length()));
        int age_width = 4; // Age has a fixed width
        int username_width = std::max(10, static_cast<int>(player.username.length()));
        int game_name_width = std::max(5, static_cast<int>(player.game_name.length()));
        int games_played_width = 15; // Games played have a fixed width
        int total_guesses_width = 15; // Guesses have a fixed width

        // Display the player information table
        os << "+--------------------------------------------------------------------------------------------------+" << std::endl;
        os << "| " << std::setw(name_width) << std::left << "       Full Name" 
           << " | " << std::setw(age_width) << std::right << "Age" 
           << " | " << std::setw(username_width) << std::left << " Username" 
           << " | " << std::setw(game_name_width) << std::left << "  Game Name" 
           << " | " << std::setw(games_played_width) << std::right << "Games Played " 
           << " | " << std::setw(total_guesses_width) << std::right << "Total Guesses "<<"|" << std::endl;
        os << "+--------------------------------------------------------------------------------------------------+" << std::endl;
        os << "| " << std::setw(name_width) << std::left << player.full_name 
           << " | " << std::setw(age_width) << std::right << player.age 
           << " | " << std::setw(username_width) << std::left << player.username 
           << " | " << std::setw(game_name_width) << std::left << player.game_name 
           << " | " << std::setw(games_played_width) << std::right << player.games_played 
           << " | " << std::setw(total_guesses_width) << std::right << player.total_guesses <<"|"<< std::endl;
        os << "+--------------------------------------------------------------------------------------------------+" << std::endl;

        return os;
    }
};

// Function to display the menu for selecting the game name
std::string display_menu() {
    std::string game_name;
    int choice;

    std::cout << "Choose your game name:" << std::endl;
    std::cout << "1. Guessing Game" << std::endl;
    std::cout << "2. Crossword Game" << std::endl;
    std::cout << "3. Racing Game" << std::endl;
    std::cout << "4. Other Option" << std::endl;
    std::cout << "Enter your choice (1-4): ";
    std::cin >> choice;
    std::cin.ignore(); // Ignore newline character after inputting choice

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
            game_name = "Racing Game";
            std::cout << "Welcome to " << game_name << std::endl;
            std::cout << "Please enter your information to start." << std::endl;
            break;
        case 4:
            std::cout << "Enter your game name: ";
            std::getline(std::cin, game_name);
            std::cout << "Welcome to " << game_name << std::endl;
            std::cout << "Please enter your information to start." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Defaulting to Guessing Game." << std::endl;
            game_name = "Guessing Game";
            break;
    }

    return game_name;
}

Player input_information() {
    std::string full_name, username;
    std::string game_name = display_menu();
    int age;
    std::cout << "Enter full name: ";
    std::getline(std::cin, full_name);
    std::cout << "Enter age: ";
    std::cin >> age;
    std::cin.ignore(); 
    std::cout << "Enter username in the game: ";
    std::getline(std::cin, username);

    return Player(full_name, age, username, game_name);
}

int main() {
    Player player = input_information();

    // Display the player information table
    std::cout << player;

    // Wait for any key press to exit
    std::cout << "Press any key to exit...";
    std::cin.get();
    
    return 0;
}
