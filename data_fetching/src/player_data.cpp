#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include "../include/player_data.h"


NguoiChoi::NguoiChoi(std::string fn, int a, std::string un, std::string gn, int gp, int tg)
    : full_name(fn), age(a), username(un), game_name(gn), games_played(gp), total_guesses(tg) {
    // Các phép tính không nên ở đây mà nên ở trong hàm operator<<
}

// Định nghĩa các biến chiều rộng trong một không gian mà cả lớp và hàm đều có thể tiếp cận (ví dụ, như các biến toàn cục hoặc trong một không gian tên)
const int name_width = 25;
const int age_width = 4;
const int username_width = 10;
const int game_name_width = 5;
const int games_played_width = 15;
const int total_guesses_width = 15;

std::ostream& operator<<(std::ostream& os, const NguoiChoi& player) {
    // Output player information with proper formatting
    os << std::left << std::setw(name_width) << player.full_name << " | "
       << std::setw(age_width) << player.age << " | "
       << std::setw(username_width) << player.username << " | "
       << std::setw(game_name_width) << player.game_name << " | "
       << std::setw(games_played_width) << player.games_played << " | "
       << std::setw(total_guesses_width) << player.total_guesses << std::endl;

    return os;
}


// int main() {
//     NguoiChoi player("Nguyen Van A", 25, "nguyenvana", "Chess", 50, 200);
//     std::cout << player;

//     return 0;
// }

// // Overload the << operator to display player information
// std::ostream& operator<<(std::ostream& os, const NguoiChoi& player) {
//     // Calculate column widths for player information
//     int name_width = std::max(25, static_cast<int>(player.full_name.length()));
//     int age_width = 4; // Age has a fixed width
//     int username_width = std::max(10, static_cast<int>(player.username.length()));
//     int game_name_width = std::max(5, static_cast<int>(player.game_name.length()));
//     int games_played_width = 15; // Games played have a fixed width
//     int total_guesses_width = 15; // Guesses have a fixed width

//     // Display the player information table
//     os << "+--------------------------------------------------------------------------------------------------+" << std::endl;
//     os << "| " << std::setw(name_width) << std::left << "       Full Name" 
//        << " | " << std::setw(age_width) << std::right << "Age" 
//        << " | " << std::setw(username_width) << std::left << " Username" 
//        << " | " << std::setw(game_name_width) << std::left << "  Game Name" 
//        << " | " << std::setw(games_played_width) << std::right << "Games Played " 
//        << " | " << std::setw(total_guesses_width) << std::right << "Total Guesses " << " |" << std::endl;
//     os << "+--------------------------------------------------------------------------------------------------+" << std::endl;
//     os << "| " << std::setw(name_width) << std::left << player.full_name 
//        << " | " << std::setw(age_width) << std::right << player.age 
//        << " | " << std::setw(username_width) << std::left << player.username 
//        << " | " << std::setw(game_name_width) << std::left << player.game_name 
//        << " | " << std::setw(games_played_width) << std::right << player.games_played 
//        << " | " << std::setw(total_guesses_width) << std::right << player.total_guesses << " |" << std::endl;
//     os << "+--------------------------------------------------------------------------------------------------+" << std::endl;

//     return os;
// }

// // Function to display the menu for selecting the game name
// std::string display_menu() {
//     std::string game_name;
//     int choice;

//     std::cout << "Choose your game name:" << std::endl;
//     std::cout << "1. Guessing Game" << std::endl;
//     std::cout << "2. Crossword Game" << std::endl;
//     std::cout << "3. Racing Game" << std::endl;
//     std::cout << "4. Other Option" << std::endl;
//     std::cout << "Enter your choice (1-4): ";
//     std::cin >> choice;
//     std::cin.ignore(); // Ignore newline character after inputting choice

//     switch (choice) {
//         case 1:
//             game_name = "Guessing Game";
//             std::cout << "Welcome to " << game_name << std::endl;
//             std::cout << "Please enter your information to start." << std::endl;
//             break;
//         case 2:
//             game_name = "Crossword Game";
//             std::cout << "Welcome to " << game_name << std::endl;
//             std::cout << "Please enter your information to start." << std::endl;
//             break;
//         case 3:
//             game_name = "Racing Game";
//             std::cout << "Welcome to " << game_name << std::endl;
//             std::cout << "Please enter your information to start." << std::endl;
//             break;
//         case 4:
//             std::cout << "Enter your game name: ";
//             std::getline(std::cin, game_name);
//             std::cout << "Welcome to " << game_name << std::endl;
//             std::cout << "Please enter your information to start." << std::endl;
//             break;
//         default:
//             std::cout << "Invalid choice. Defaulting to Guessing Game." << std::endl;
//             game_name = "Guessing Game";
//             break;
//     }

//     return game_name;
// }

// // Function to input player information
// NguoiChoi input_information() {
//     std::string full_name, username;
//     std::string game_name = display_menu();
//     int age;
//     std::cout << "Enter full name: ";
//     std::getline(std::cin, full_name);
//     std::cout << "Enter age: ";
//     std::cin >> age;
//     std::cin.ignore(); 
//     std::cout << "Enter username in the game: ";
//     std::getline(std::cin, username);

//     return NguoiChoi(full_name, age, username, game_name);
// }
