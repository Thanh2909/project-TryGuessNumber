#include <gtest/gtest.h>
#include <map>
#include "../../data_library/include/random.h"  // Adjust this path to match your project structure


class uniform_int : public ::testing::Test {
protected:
    RandomGenerator rg;
};
// Test case for the rg.uniform_int function
class NormalDistributionTest : public :: uniform_int {};

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

// Check the distribution of the rg.uniform_int function to ensure all values between [min, max] appear at least once
TEST_F(uniform_int, ReturnsValuesWithUniformDistribution) {
    int min = 1, max = 10;
    std::map<int, int> distribution_count;

    // Initialize the map with values from min to max
    for (int i = min; i <= max; ++i) {
        distribution_count[i] = 0;
    }

    // Generate random numbers and count their frequency
    for (int i = 0; i < 10000; ++i) {
        int result = rg.uniform_int(min, max);
        distribution_count[result]++;
    }

    // Ensure all values in the range [min, max] have appeared at least once
    for (int i = min; i <= max; ++i) {
        EXPECT_GT(distribution_count[i], 0);
    }
}

// Check if the mean of the normally distributed random numbers is close to the expected mean
TEST_F(NormalDistributionTest, NormalDistributionMean) {
    double mean = 0.0, stddev = 1.0;
    double sum = 0.0;

    for (int i = 0; i < 1000; ++i) {
        sum += rg.normal(mean, stddev);
    }
    double average = sum / 1000.0;
    EXPECT_NEAR(average, mean, stddev / 10.0); // Check if the average is close to the mean
}

// Check if the standard deviation of the normally distributed random numbers is close to the expected standard deviation
TEST_F(NormalDistributionTest, NormalDistributionStdDev) {
    double mean = 0.0, stddev = 1.0;
    double sum = 0.0, sum_of_squares = 0.0;

    for (int i = 0; i < 1000; ++i) {
        double value = rg.normal(mean, stddev);
        sum += value;
        sum_of_squares += (value - mean) * (value - mean);
    }
    double variance = sum_of_squares / 999.0; // Calculate variance
    double calculated_stddev = std::sqrt(variance);
    EXPECT_NEAR(calculated_stddev, stddev, 0.1); // Check if the standard deviation is close to the expected value
}
