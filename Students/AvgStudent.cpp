#include "AvgStudent.hpp"

Solution AvgStudent::solver(const Equation &equat){
    std::random_device rng;
    std::minstd_rand gen(rng());
    std::uniform_real_distribution<double> dist(0.0, 1.0);

    if (dist(gen) > this->prob){
        return equatSolver(equat);
    }
    return {0.0, 0.0};
}
