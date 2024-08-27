#include <iostream>
#include "Point.hpp"

int main( void ) {

    std::cout << "==============" << std::endl;
    std::cout << "CREATING ABC" << std::endl;
    std::cout << "==============" << std::endl;

    Point A(0, 0);
    Point B(4, 0);
    Point C(2, 4);

    std::cout << "==============" << std::endl;
    std::cout << "CREATING P1 & P2" << std::endl;
    std::cout << "==============" << std::endl;

    Point P1(2.2f, 2.2f);
    Point P2(2, -1);

    std::cout << "==============" << std::endl;
    std::cout << "CALCULATING BSP" << std::endl;
    std::cout << "==============" << std::endl;

    bool result1 = bsp(A, B, C, P1);
    bool result2 = bsp(A, B, C, P2);

    std::cout << "==============" << std::endl;
    std::cout << "RESULTS" << std::endl;
    std::cout << "==============" << std::endl;

    std::cout << "Point P1 is " << (result1 ? "within" : "outside") << " of triangle ABC" << std::endl;
    std::cout << "Point P2 is " << (result2 ? "within" : "outside") << " of triangle ABC" << std::endl;

    std::cout << std::endl;

    return 0;
}