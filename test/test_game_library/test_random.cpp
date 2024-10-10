#include <gtest/gtest.h>
#include <map>
#include "../../data_library/include/random.h"  // Adjust this path to match your project structure


class uniform_int : public ::testing::Test {
protected:
    RandomGenerator rg;
};

// Check if the return value of rg.uniform_int is within the range [min, max]
TEST_F(uniform_int, ReturnsValueWithinRange) {
    int min = 1, max = 10;
    bool in_range = true;

    for (int i = 0; i < 1000; ++i) {
        int result = rg.uniform_int(min, max);
        if (result < min || result > max) {
            in_range = false;
            break;
        }
    }

    EXPECT_TRUE(in_range);
}
