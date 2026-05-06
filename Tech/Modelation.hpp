#ifndef MODELATION_H
#define MODELATION_H

#include <random>
#include <vector>
#include <memory>
#include <iostream>

#include "Student.hpp"
#include "BadStudent.hpp"
#include "GoodStudent.hpp"
#include "AvgStudent.hpp"
#include "Teacher.hpp"

class Model {
private:
    void EquatToStudents(std::vector<std::unique_ptr<Student>> &students, Teacher &teacher);
    void fillStudent(std::vector<std::unique_ptr<Student> > &students, const int &stud_num);
    void printMenu();
    void instruction(const int &stud_num);
public:
    void modelation();

};



#endif //MODELATION_H
