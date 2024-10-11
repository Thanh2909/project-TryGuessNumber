#include "../include/random.h"
#include <random>
#include <chrono>

//Constructor Definition
RandomGenerator::RandomGenerator()
    : generator(std::chrono::system_clock::now().time_since_epoch().count()) {}

// Define function uniform_int
int RandomGenerator::uniform_int(int min, int max) {
    std::uniform_int_distribution<int> distribution(min, max);
    return distribution(generator);
}

// Define normal function
double RandomGenerator::normal(double mean, double stddev) {
    std::normal_distribution<double> distribution(mean, stddev);
    return distribution(generator);
}
