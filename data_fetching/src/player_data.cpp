#include <iostream>
#include <limits>  // Thêm thư viện này để sử dụng numeric_limits
#include <iomanip>
#include <string>
#include <algorithm>
#include "../include/player_data.h"


Playerdata::Playerdata(std::string fn, int a, std::string un, std::string gn, int gp, int tg)
    : full_name(fn), age(a), username(un), game_name(gn), games_played(gp), total_guesses(tg) {
    // Các phép tính không nên ở đây mà nên ở trong hàm operator<<
}

// Quá tải toán tử << để hiển thị thông tin người chơi
std::ostream& operator<<(std::ostream& os, const Playerdata& player) {
    // Tính toán chiều rộng cột cho thông tin người chơi
    int name_width = std::max(25, static_cast<int>(player.full_name.length()));
    int age_width = 4; // Tuổi có chiều rộng cố định
    int username_width = std::max(10, static_cast<int>(player.username.length()));
    int game_name_width = std::max(13, static_cast<int>(player.game_name.length()));
    int games_played_width = 15; // Số trò chơi đã chơi có chiều rộng cố định
    int total_guesses_width = 15; // Số lần đoán có chiều rộng cố định

    // Hiển thị bảng thông tin người chơi
    os << "+---------------------------------------------------------------------------------------------------+" << std::endl;
    os << "| " << std::setw(name_width) << std::left << "       Full Name"
       << " | " << std::setw(age_width) << std::right << "Age"
       << " | " << std::setw(username_width) << std::left << " Username"
       << " | " << std::setw(game_name_width) << std::left << "  Game Name"
       << " | " << std::setw(games_played_width) << std::right << "Games Played "
       << " | " << std::setw(total_guesses_width) << std::right << "Total Guesses " << " |" << std::endl;
    os << "+---------------------------------------------------------------------------------------------------+" << std::endl;
    os << "| " << std::setw(name_width) << std::left << player.full_name
       << " | " << std::setw(age_width) << std::right << player.age
       << " | " << std::setw(username_width) << std::left << player.username
       << " | " << std::setw(game_name_width) << std::left << player.game_name
       << " | " << std::setw(games_played_width) << std::right << player.games_played
       << " | " << std::setw(total_guesses_width) << std::right << player.total_guesses << " |" << std::endl;
    os << "+---------------------------------------------------------------------------------------------------+" << std::endl;
    return os;
}

std::string display_menu() {
    std::string game_name;
    int choice;

    do {
        std::cout << "Choose your game name:" << std::endl;
        std::cout << "1. Guessing Game" << std::endl;
        std::cout << "2. Crossword Game" << std::endl;
        std::cout << "3. Chess" << std::endl;
        std::cout << "4. Other Option" << std::endl;
        std::cout << "Enter your choice (1-4): ";
        std::cin >> choice;

        // Kiểm tra nếu nhập không phải số
        if (std::cin.fail()) {
            std::cin.clear();  // Xóa trạng thái lỗi của cin
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Bỏ qua tất cả ký tự còn lại trong buffer
            std::cout << "Invalid input. Please enter a number between 1 and 4." << std::endl;
            continue;
        }
        
        // Bỏ qua ký tự xuống dòng sau khi nhập lựa chọn
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (choice >= 1 && choice <= 4) {
            // Lựa chọn hợp lệ, xử lý từng trường hợp
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
            }
        } else {
            // Thông báo cho người dùng nhập lại
            std::cout << "Invalid choice. Please enter a number between 1 and 4." << std::endl;
        }
    } while (choice < 1 || choice > 4); // Lặp lại nếu lựa chọn không hợp lệ

    return game_name;
}



