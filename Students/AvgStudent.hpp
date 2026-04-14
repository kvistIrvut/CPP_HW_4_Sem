#ifndef AVGSTUDENT_H
#define AVGSTUDENT_H
#include "Solution.hpp"
#include "Equation.hpp"
#include "Student.hpp"
#include "Tech/Solver.hpp"
#include <random>

class AvgStudent : public Student{
protected:
    double prob = 0.5;
    Solution solver(const Equation &equat) override;
public:
    using Student::Student;
     ~AvgStudent() override = default;
};



#endif //AVGSTUDENT_H
