#ifndef LETTER_H
#define LETTER_H
#include <string>
#include "Equation.hpp"
#include "Solution.hpp"

class Letter {
private:
    std::string m_stud_name;
    Equation m_equation;
    Solution m_solution;

public:
    const std::string &getStudName() const {
        return this->m_stud_name;
    }

    const Equation &getEquation() const {
        return this->m_equation;
    }

    const Solution &getSolution() const {
        return this->m_solution;
    }

    Letter(const std::string& stud_name, const Equation& equat, const Solution& sol): m_stud_name(stud_name), m_equation(equat), m_solution(sol) {};
};


#endif //LETTER_H
