#include <gtest/gtest.h>
#include "../../data_library/src/random.h"  

// Test to check if the generated random number is within the valid range
TEST(MyRandomNamespaceTest, UniformIntInRange) {
    int min = 1;
    int max = 10;

    // Test 1000 random numbers
    for (int i = 0; i < 1000; ++i) {
        int random_number = MyRandomNamespace::uniform_int(min, max);
        EXPECT_GE(random_number, min); // Check if random_number >= min
        EXPECT_LE(random_number, max); // Check if random_number <= max
    }
}

// Test to check if the random numbers following a normal distribution are close to the mean
TEST(MyRandomNamespaceTest, NormalDistributionMean) {
    double mean = 0.0;
    double stddev = 1.0;
    int sample_size = 10000;
    double total = 0.0;

    // Calculate the sum of random values to check the mean
    for (int i = 0; i < sample_size; ++i) {
        total += MyRandomNamespace::normal(mean, stddev);
    }

    // Calculate the average and check if it is close to the 'mean' value
    double average = total / sample_size;
    EXPECT_NEAR(average, mean, 0.1); // Check if the average is near the mean with a tolerance of 0.1
}

// Test to check the standard deviation of random numbers following a normal distribution
TEST(MyRandomNamespaceTest, NormalDistributionStdDev) {
    double mean = 0.0;
    double stddev = 1.0;
    int sample_size = 10000;
    std::vector<double> samples;

    // Collect sample data from the random.normal() function
    for (int i = 0; i < sample_size; ++i) {
        samples.push_back(MyRandomNamespace::normal(mean, stddev));
    }

    // Calculate the mean
    double sum = std::accumulate(samples.begin(), samples.end(), 0.0);
    double average = sum / sample_size;

    // Calculate the variance
    double variance = 0.0;
    for (const auto& value : samples) {
        variance += (value - average) * (value - average);
    }
    variance /= sample_size;

    // Check if the standard deviation is near stddev with a tolerance of 0.1
    EXPECT_NEAR(sqrt(variance), stddev, 0.1);
}

// Main function to run all tests
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
