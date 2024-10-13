#ifndef GAME_H
#define GAME_H
#include <iostream>
#include "../../data_fetching/include/player_data.h"
#include "../../data_library/include/game_library.h"

class Game {
public:
     std::pair<int, double> start_game(const Playerdata& player); 
     int get_player_guess(); 
};
#endif