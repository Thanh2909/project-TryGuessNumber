#include <random>
#include <chrono>

class RandomGenerator {
public:
    RandomGenerator() : generator(std::chrono::system_clock::now().time_since_epoch().count()) {}
    int uniform_int(int min, int max);
    double normal(double mean, double stddev);
    std::default_random_engine generator;
};
