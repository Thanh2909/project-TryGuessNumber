#include "include/player_data.h"
#include <iostream>

int main() {
    // Declare variables to store player information
    std::string full_name;
    int age;
    std::string username;
    std::string game_name;

    // Display menu to choose game name and store in game_name variable
    game_name = display_menu();

    // Get player information from the keyboard
    std::cout << "Enter full name: ";
    std::getline(std::cin, full_name);
    std::cout << "Enter age: ";
    std::cin >> age;
    std::cin.ignore(); // Ignore newline character after entering age
    std::cout << "Enter in-game username: ";
    std::getline(std::cin, username);

    // Create a Playerdata object with the entered information
    Playerdata player(full_name, age, username, game_name, 0, 0,0);

    // Display player information to the screen
    std::cout << player;


    return 0;
}