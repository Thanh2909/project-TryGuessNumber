#include <gtest/gtest.h>
#include "../../data_fetching/include/player_data.h" // Đường dẫn đến file player.h
#include <sstream>

// Test constructor
TEST(NguoiChoiTest, Constructor) {
    NguoiChoi player("Nguyen Van A", 25, "nguyenvana", "Chess", 100, 200);
    EXPECT_EQ(player.full_name, "Nguyen Van A");
    EXPECT_EQ(player.age, 25);
    EXPECT_EQ(player.username, "nguyenvana");
    EXPECT_EQ(player.game_name, "Chess");
    EXPECT_EQ(player.games_played, 100);
    EXPECT_EQ(player.total_guesses, 200);
}

// Test the overloaded << operator
TEST(NguoiChoiTest, OutputOperator) {
    NguoiChoi player("Nguyen Van A", 25, "nguyenvana", "Chess", 100, 200);
    std::ostringstream output;
    output << player;

    std::string expected_output = "Nguyen Van A              | 25   | nguyenvana | Chess | 100             | 200            \n";

    EXPECT_EQ(output.str(), expected_output);}

// Test operator << for displaying player information
TEST(NguoiChoiTest, OutputStreamTest) {
    // Initialize player with default values for games_played and total_guesses as 0
    NguoiChoi player("Nguyen Van B", 30, "nguyenvanb", "Crossword Game", 0, 0);
    std::stringstream ss;
    
    ss << player; // Format output using operator<<
    std::string output = ss.str();
    
    // Check if the output contains expected player information
    EXPECT_NE(output.find("Nguyen Van B"), std::string::npos);
    EXPECT_NE(output.find("30"), std::string::npos);
    EXPECT_NE(output.find("nguyenvanb"), std::string::npos);
    EXPECT_NE(output.find("Crossword Game"), std::string::npos);
    
    // Check for default values of 0 for games_played and total_guesses
    EXPECT_NE(output.find("0"), std::string::npos); // Default games played and guesses should be 0
}


