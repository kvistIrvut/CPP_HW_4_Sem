#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "Solution.hpp"
#include "Equation.hpp"
#include "Letter.hpp"

class Student {
protected:
    std::string m_stud_name;
    Equation m_equation;

    virtual Solution solver(const Equation &equat) {
        return {0.0, 0.0};
    }

public:
    //По совету линтера приписал explicit, с целью запрета неявного создания объекта класса
    explicit Student(const std::string &stud_name): m_stud_name(stud_name) {};


    void setEquat(const Equation &equat) {
        this->m_equation = equat;
    }

    Letter writeLetter() {
        return {this->m_stud_name, this->m_equation, solver(this->m_equation)};
    }

    virtual ~Student() = default;
};


#endif //STUDENT_H
