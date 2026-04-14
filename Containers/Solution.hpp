#ifndef SOLUTION_H
#define SOLUTION_H


class Solution {
private:
    double m_root_1 = 0, m_root_2 = 0;

public:
    const double &getRoot_1() const {
        return this->m_root_1;
    }

    const double &getRoot_2() const {
        return this->m_root_2;
    }

    Solution(const double &root_1,const double &root_2) : m_root_1(root_1), m_root_2(root_2) {};
};


#endif //SOLUTION_H
