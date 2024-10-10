#include <random>
#include <chrono>
#include "../include/random.h"

    // Random number generator initialized with a seed from the current time
    std::default_random_engine generator(std::chrono::system_clock::now().time_since_epoch().count());

    // Generate a random integer in the range [min, max]
    int uniform_int(int min, int max) {
        std::uniform_int_distribution<int> distribution(min, max);
        return distribution(generator);
    }

    // Generate a random number with a normal distribution
    double normal(double mean, double stddev) {
        std::normal_distribution<double> distribution(mean, stddev);
        return distribution(generator);
    }
