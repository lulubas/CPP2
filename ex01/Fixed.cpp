/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:58:59 by lbastien          #+#    #+#             */
/*   Updated: 2024/06/21 14:13:31 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

//Default constructor
Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    _setRawbits( 0 );
}

//Overloaded constructor
Fixed::Fixed( const int value) {
    std::cout << "Int constructor called" << std::endl;
    _fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed( const float value) {
    std::cout << "Float constructor called" << std::endl;
    _fixedPointValue = static_cast<int>(roundf(value * (1 << _fractionalBits)));
}

//Copy constructor
Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    _fixedPointValue = other._fixedPointValue;
}

//Copy assignement constructor
Fixed &Fixed::operator=( const Fixed &other ) {
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &other) {
        _fixedPointValue = other._fixedPointValue;        
    }
    return *this;
}

//Operators overload
std::ostream& operator<<( std::ostream& stream, const Fixed& other ) {
    stream << other.toFloat();
    return stream;
}

//Destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

//Member functions
int Fixed::_getRawBits( void ) const {
    return _fixedPointValue;
}

void Fixed::_setRawbits( int const raw ) {
    _fixedPointValue = raw;
}

int Fixed::toInt( void ) const {
    int fpValue;
    int iValue;

    fpValue = Fixed::_getRawBits();
    iValue = fpValue >> Fixed::_fractionalBits;
    return iValue;
}

float Fixed::toFloat( void ) const {
    return static_cast<float>(_getRawBits()) / (1 << _fractionalBits);
}
