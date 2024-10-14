#include <gtest/gtest.h>
#include "../../data_fetching/include/player_data.h" // Path to player.h
#include <sstream>

// Test constructor
TEST(PlayerTest, Constructor) {
    Playerdata player("Nguyen Van A", 25, "nguyenvana", "Chess", 100, 200, 2.5);
    EXPECT_EQ(player.full_name, "Nguyen Van A");
    EXPECT_EQ(player.age, 25);
    EXPECT_EQ(player.username, "nguyenvana");
    EXPECT_EQ(player.game_name, "Chess");
    EXPECT_EQ(player.games_played, 100);
    EXPECT_EQ(player.total_guesses, 200);
    EXPECT_EQ(player.guess_rate, 2.5);
}

TEST(PlayerTest, OutputOperator) {
    Playerdata player("Nguyen Van A", 25, "nguyenvana", "Chess", 100, 200, 2.5);
    std::ostringstream output;
    output << player;
    std::string expected_output = 
        "+-----------------------------------------------------------------------------------------------------------------------+\n"
        "|        Full Name          |  Age |  Username  |   Game Name   |   Games Played  |  Total Guesses  | Corect guess rate |\n"
        "+-----------------------------------------------------------------------------------------------------------------------+\n"
        "| Nguyen Van A              |   25 | nguyenvana | Chess         |             100 |             200 |               2.5 |\n"
        "+-----------------------------------------------------------------------------------------------------------------------+\n";
    EXPECT_EQ(output.str(), expected_output);
}

// Test operator << for displaying player information
TEST(PlayerTest, OutputStreamTest) {
    // Initialize player with default values for games_played and total_guesses as 0
    Playerdata player("Nguyen Van B", 30, "nguyenvanb", "Crossword Game", 0, 0, 0);
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

TEST(display_menu, SelectDefaultGames) {
    std::vector<std::pair<int, std::string>> choices = {
        {1, "Guessing Game"},
        {2, "Crossword Game"},
        {3, "Chess"}
    };
    
    for (const auto& choice : choices) {
        std::istringstream input(std::to_string(choice.first) + "\n");
        std::ostringstream output;
        
        std::streambuf* cinbuf = std::cin.rdbuf(input.rdbuf());
        std::streambuf* coutbuf = std::cout.rdbuf(output.rdbuf());

        std::string game_name = display_menu();
        
        EXPECT_EQ(game_name, choice.second);
        EXPECT_NE(output.str().find("Welcome to " + choice.second), std::string::npos);
        
        std::cin.rdbuf(cinbuf);
        std::cout.rdbuf(coutbuf);
    }
}

TEST(display_menu, SelectOtherOptionWithAndWithoutName) {
    std::vector<std::pair<std::string, std::string>> inputs = {
        {"4\nTrivia\n", "Trivia"},  // Custom game name
        {"4\n\n", ""}               // Empty game name
    };
    
    for (const auto& input_pair : inputs) {
        // Simulate user input for "Other Option"
        std::istringstream input(input_pair.first);
        std::ostringstream output;

        // Redirect cin and cout to check the output
        std::streambuf* cinbuf = std::cin.rdbuf(input.rdbuf());
        std::streambuf* coutbuf = std::cout.rdbuf(output.rdbuf());

        std::string game_name = display_menu();

        // Check if the returned game name matches the input
        EXPECT_EQ(game_name, input_pair.second);
        EXPECT_NE(output.str().find("Welcome to " + input_pair.second), std::string::npos);

        // Restore the original stream
        std::cin.rdbuf(cinbuf);
        std::cout.rdbuf(coutbuf);
    }
}

TEST(display_menu, ValidChoiceAfterInvalidChoice) {
    std::istringstream input("5\n3\n");  // Invalid choice 5, followed by valid choice 3 (Chess)
    std::ostringstream output;

    // Redirect cin and cout to check the output
    std::streambuf* cinbuf = std::cin.rdbuf(input.rdbuf());
    std::streambuf* coutbuf = std::cout.rdbuf(output.rdbuf());

    std::string game_name = display_menu();

    // Check the final choice
    EXPECT_EQ(game_name, "Chess");
    EXPECT_NE(output.str().find("Invalid choice. Please enter a number between 1 and 4."), std::string::npos);
    EXPECT_NE(output.str().find("Welcome to Chess"), std::string::npos);

    // Restore the original stream
    std::cin.rdbuf(cinbuf);
    std::cout.rdbuf(coutbuf);
}


TEST(display_menu, InvalidCharInput) {
    std::istringstream input("a\n1\n");  // Invalid choice a, followed by valid choice 1
    std::ostringstream output;

    // Redirect cin and cout to check the output
    std::streambuf* cinbuf = std::cin.rdbuf(input.rdbuf());
    std::streambuf* coutbuf = std::cout.rdbuf(output.rdbuf());

    std::string game_name = display_menu();

    // Check the final choice
    EXPECT_EQ(game_name, "Guessing Game");
    EXPECT_NE(output.str().find("Invalid input. Please enter a number between 1 and 4."), std::string::npos);
    EXPECT_NE(output.str().find("Welcome to Guessing Game"), std::string::npos);

    // Restore the original stream
    std::cin.rdbuf(cinbuf);
    std::cout.rdbuf(coutbuf);
}