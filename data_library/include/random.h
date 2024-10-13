#ifndef RANDOM_H
#define RANDOM_H
#include <random>  // Used to declare std::default_random_engine

class RandomGenerator {
public:
    RandomGenerator();
    
    int uniform_int(int min, int max);
    double normal(double mean, double stddev);

private:
    std::default_random_engine generator;  // Set private to protect integrity
};
#endif