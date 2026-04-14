#include "Teacher.hpp"

#include <iostream>


void Teacher::getEquations(const std::string &filename) {
    std::fstream file(filename);
    std::string line;

    if (!file.is_open()) {
        std::cerr << "Unable to open file " << filename << std::endl;
        return;
    }

    while (std::getline(file, line)) {
        //Линтер предложил emplace_back - почитал, удобно что сразу в векторе создается объект
        this->equations.emplace_back(line);
    }

    file.close();
}

Equation Teacher::giveEquation() {
    std::random_device rng;
    std::minstd_rand gen(rng());
    std::uniform_int_distribution<int> dist(0, this->equations.size() - 1);

    return this->equations[dist(gen)];
}

void Teacher::lettersCheck() {
    while (!this->letters.empty()) {
        Letter check = this->letters.front();
        this->letters.pop();

        Solution sol = solver(check.getEquation());
        if (sol.getRoot_1() == check.getSolution().getRoot_1() &&
            sol.getRoot_2() == check.getSolution().getRoot_2()) {
            updateTabel(check.getStudName(), 1);
        }
        //Добавил прибавление 0, чтобы гарантировать запись всех студентов в таблицу
        else {
            updateTabel(check.getStudName(), 0);
        }
    }
}
