#ifndef TEACHER_H
#define TEACHER_H

#include <map>
#include <string>
#include <vector>
#include <queue>
#include <random>
#include <fstream>
#include <iostream>

#include "Containers/Letter.hpp"
#include "Tech/Solver.hpp"

class Teacher {
private:
    std::map<std::string, int> tabel;
    std::queue<Letter> letters;
    std::vector<Equation> equations;

    Solution solver(const Equation &equat) {
        return equatSolver(equat);
    }

    void updateTabel(const std::string &stud_name, const int &score) {
        this->tabel[stud_name] += score;
    }

public:
    void clearTabel() {
        this->tabel.clear();
    }

    void getEquations(const std::string &filename);

    Equation giveEquation();

    void addLetterToQ(const Letter &letter) {
        this->letters.push(letter);
    }

    void lettersCheck();

    void printTabel() {
        std::cout << "Name -> Grade" << std::endl;

        for (auto &row: this->tabel) {
            std::cout << row.first << " -> " << row.second << std::endl;
        }
    }
};


#endif //TEACHER_H
