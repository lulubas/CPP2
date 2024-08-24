#include <iostream>
#include "Fixed.hpp"
int main( void ) {

    std::cout << "==============" << std::endl;
    std::cout << "SUBJECT TESTS" << std::endl;
    std::cout << "==============" << std::endl;

    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "Max is " << Fixed::max( a, b ) << std::endl;
    
    return 0;
}