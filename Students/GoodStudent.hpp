#ifndef GOODSTUDENT_H
#define GOODSTUDENT_H
#include "../Containers/Solution.hpp"
#include "../Containers/Equation.hpp"
#include "Student.hpp"
#include "../Tech/Solver.hpp"

class GoodStudent : public Student {
protected:
    Solution solver(const Equation &eqaut) override {
        return equatSolver(eqaut);
    }
public:
    using Student::Student;
    ~GoodStudent() override = default;
};



#endif //GOODSTUDENT_H
