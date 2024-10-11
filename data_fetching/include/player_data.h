#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>

class NguoiChoi {
public:
    std::string full_name;
    int age;
    std::string username;
    std::string game_name;
    int games_played;
    int total_guesses;

    NguoiChoi(std::string fn, int a, std::string un, std::string gn, int gp, int tg);
    
    friend std::ostream& operator<<(std::ostream& os, const NguoiChoi& player);
};
