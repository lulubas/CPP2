/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:58:59 by lbastien          #+#    #+#             */
/*   Updated: 2024/06/21 13:58:49 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    _setRawbits( 0 );
}

Fixed::Fixed( const int value) {
    std::cout << "Int constructor called" << std::endl;
    _fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed( const float value) {
    std::cout << "Float constructor called" << std::endl;
    _fixedPointValue = static_cast<int>(roundf(value * (1 << _fractionalBits)));
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    _fixedPointValue = other._fixedPointValue;
}

Fixed &Fixed::operator=( const Fixed &other ) {
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &other) {
        _fixedPointValue = other._fixedPointValue;        
    }
    return *this;
}

std::ostream& operator<<( std::ostream& stream, const Fixed& other ) {
    stream << other.toFloat();
    return stream;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

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
