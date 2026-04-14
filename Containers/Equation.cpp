#include "Equation.hpp"

//ожидаемый формат "a b c"
//TO DO: Добавить проверку на вводе
Equation::Equation(const std::string& str) {
    std::istringstream ss(str);
    ss >> this->m_a >> this->m_b >> this->m_c;
}
