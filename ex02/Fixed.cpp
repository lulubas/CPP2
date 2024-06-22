/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:58:59 by lbastien          #+#    #+#             */
/*   Updated: 2024/06/21 17:18:13 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

//Default constructor
Fixed::Fixed() {
    _setRawbits( 0 );
}

//Overloaded constructor
Fixed::Fixed( const int value) {
    _fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed( const float value) {
    _fixedPointValue = static_cast<int>(roundf(value * (1 << _fractionalBits)));
}

//Copy constructor
Fixed::Fixed(const Fixed &other) {
    _fixedPointValue = other._fixedPointValue;
}

//Copy assignement constructor
Fixed &Fixed::operator=( const Fixed &other ) {
    if (this != &other) {
        _fixedPointValue = other._fixedPointValue;        
    }
    return *this;
}

//Arithmetic operators overload
Fixed Fixed::operator+( const Fixed &other ) {
        Fixed result;
        result._fixedPointValue = this->_fixedPointValue + other._fixedPointValue;        
    return result;
}

Fixed Fixed::operator-( const Fixed &other ) {
        Fixed result;
        result._fixedPointValue = this->_fixedPointValue - other._fixedPointValue;        
    return result;
}

Fixed Fixed::operator*( const Fixed &other ) {
        Fixed result;
        result._fixedPointValue = (this->_fixedPointValue * other._fixedPointValue) >> _fractionalBits;        
    return result;
}

Fixed Fixed::operator/( const Fixed &other ) {
        Fixed result;
        result._fixedPointValue = (this->_fixedPointValue << _fractionalBits) / other._fixedPointValue;        
    return result;
}

//Increment and decrement operators overload
Fixed& Fixed::operator++( void ) {
    _fixedPointValue++;        
    return *this;
}

Fixed Fixed::operator++( int ) {
        Fixed temp = *this;
        _fixedPointValue++;
    return temp;
}

Fixed& Fixed::operator--( void ) {
    _fixedPointValue--;        
    return *this;
}

Fixed Fixed::operator--( int ) {
        Fixed temp = *this;
        _fixedPointValue--;
    return temp;
}

//Comparaison operators overload
bool    Fixed::operator>( const Fixed &other) const {
    return (this->_fixedPointValue > other._fixedPointValue);
}

bool    Fixed::operator>=( const Fixed &other) const {
    return (this->_fixedPointValue >= other._fixedPointValue);
}

bool    Fixed::operator<( const Fixed &other) const {
    return (this->_fixedPointValue < other._fixedPointValue);
}

bool    Fixed::operator<=( const Fixed &other) const {
    return (this->_fixedPointValue > other._fixedPointValue);
}

bool    Fixed::operator==( const Fixed &other) const {
    return (this->_fixedPointValue == other._fixedPointValue);
}

bool    Fixed::operator!=( const Fixed &other) const {
    return (this->_fixedPointValue != other._fixedPointValue);
}

//Operators overload
std::ostream& operator<<( std::ostream& stream, const Fixed& other ) {
    stream << other.toFloat();
    return stream;
}

//Destructor
Fixed::~Fixed() {}

//Public member functions
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

Fixed& Fixed::min( Fixed& a, Fixed& b) {
    if ( a <= b)
        return a;
    else
        return b;
}

const Fixed& Fixed::min(const Fixed& a,const Fixed& b) {
    if ( a <= b)
        return a;
    else
        return b;
}

Fixed& Fixed::max( Fixed& a, Fixed& b) {
    if ( a >= b)
        return a;
    else
        return b;
}

const Fixed& Fixed::max(const Fixed& a,const Fixed& b) {
    if ( a >= b)
        return a;
    else
        return b;
}

//Private member functions
int Fixed::_getRawBits( void ) const {
    return _fixedPointValue;
}

void Fixed::_setRawbits( int const raw ) {
    _fixedPointValue = raw;
}