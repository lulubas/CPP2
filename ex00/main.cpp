#include "Fixed.hpp"
#include <iostream>

int main( void ) {

    std::cout << "==============" << std::endl;
    std::cout << "SUBJECT TESTS" << std::endl;
    std::cout << "==============" << std::endl;


    Fixed a;
    Fixed b( a );
    Fixed c;

    c = b;
    
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    
    return 0;
}