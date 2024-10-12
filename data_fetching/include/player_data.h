#ifndef PLAYER_DATA_H
#define PLAYER_DATA_H

#include <iostream>
#include <string>

class Playerdata {
public:
    std::string full_name;
    int age;
    std::string username;
    std::string game_name;
    int games_played;
    int total_guesses;
    Playerdata(std::string fn, int a, std::string un, std::string gn, int gp, int tg);
    friend std::ostream& operator<<(std::ostream& os, const Playerdata& player);  
};

// Function to display the menu for selecting the game name
std::string display_menu();
#endif


