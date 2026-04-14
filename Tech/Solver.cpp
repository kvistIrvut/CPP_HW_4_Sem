#include "Solver.hpp"

//Надеюсь эту функцию не надо было дробить на 1000 и 1 функцию
Solution equatSolver(const Equation &equation) {
    double coef_a = equation.getA();
    double coef_b = equation.getB();
    double coef_c = equation.getC();

    double discrim = coef_b * coef_b - 4 * coef_a * coef_c;
    if (discrim > 0.0) {
        if (coef_a == 0.0) {
            return {-coef_b / coef_c, -coef_b / coef_c};
        }
        return {(-coef_b + sqrt(discrim)) / (2 * coef_a), (-coef_b - sqrt(discrim)) / (2 * coef_a)};

    }
    return {0.0, 0.0};
}
