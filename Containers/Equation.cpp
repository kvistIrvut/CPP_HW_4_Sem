#include "Equation.hpp"

#include <iostream>

//ожидаемый формат "a b c"
Equation::Equation(const std::string& str) {
    std::istringstream ss(str);

    //Проверяет что в строчке как минимум 3 числа. Все что вне отбрасывается(если я правильно понимаю написанное).
    if(!(ss >> this->m_a >> this->m_b >> this->m_c)) {
        std::cerr << "Error in reading input" << std::endl;
        exit(-1);
    }
}
