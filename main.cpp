#include <iostream>
#include "./data_fetching/include/player_data.h"
#include "./data_library/include/game_library.h"
#include "./data_processing/include/game.h"

using namespace std;

int main() {
    while (true) {
        int total_games_played = 1;  // Total number of games played
        int total_guesses_made = 0;  // Total number of guesses
        double guess_rate_corect = 0;

        // Display game menu and get the game name
        string gameName = display_menu();

        // Enter player information
        cout << "Enter full name: ";
        string fullName;
        getline(cin >> ws, fullName);

        cout << "Enter age: ";
        int age;
        cin >> age;

        cout << "Enter username: ";
        string username;
        cin >> username;
       
         // Initialize Playerdata object for the selected game
         Playerdata player(fullName, age, username, gameName, total_games_played, total_guesses_made, guess_rate_corect);
        // Game loop and pause after each game
        while (true) {
            // Initialize Game object and start the game
            Game game;
            cout << "Round: " << total_games_played << endl;
            auto result = game.start_game(player);
            int guess_count = result.first;    // Get the number of guesses from the start_game function
            // Update player information after the game ends
            ++ total_games_played;  // Update total number of games played
            total_guesses_made += guess_count;  // Update total number of guesses
            player.games_played = total_games_played-1;  // Update Playerdata object
            player.total_guesses = total_guesses_made; //(();
            player.guess_rate = (static_cast<double>(player.games_played) / player.total_guesses) * 100;
             // Initialize Playerdata object for the selected game
            // Display updated player information
            cout << player << endl;

            // Display pause menu
            int choice = display_pause();

            if (choice == 2) {
                // If the player chooses to return to the game selection menu, break the game loop
                break;
            }
        }
    }
}
