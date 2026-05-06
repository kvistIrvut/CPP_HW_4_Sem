#ifndef EQUATION_H
#define EQUATION_H

#include <string>
#include <sstream>

class Equation {
private:
    double m_a = 0, m_b = 0, m_c = 0;

public:
    const double &getA() const {
        return this->m_a;
    }

    const double &getB() const {
        return this->m_b;
    }

    const double &getC() const {
        return this->m_c;
    }
    //Добавил пустой конструктор так как линетр ругался, что в конструкторе класса Student поле m_equation не объявлено
    Equation() = default;

    //По совету линтера приписал explicit, с целью запрета неявного создания объекта класса
    explicit Equation(const std::string& str);
};


#endif //EQUATION_H
