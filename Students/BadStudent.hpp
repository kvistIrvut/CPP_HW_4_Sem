#ifndef BADSTUDENT_H
#define BADSTUDENT_H
#include "../Containers/Solution.hpp"
#include "../Containers/Equation.hpp"
#include "Student.hpp"


class BadStudent: public Student{
public:
    using Student::Student;
    ~BadStudent() override = default;
};



#endif //BADSTUDENT_H
