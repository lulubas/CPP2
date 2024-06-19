/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:58:59 by lbastien          #+#    #+#             */
/*   Updated: 2024/06/19 14:51:05 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    _fixedPointValue = other._fixedPointValue;
}

Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignement constructor called" << std::endl;
    if (this != &other) {
        _fixedPointValue = other._fixedPointValue;        
    }
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) {
    std::cout << "getRawBits function called" << std::endl;
    return _fixedPointValue;
}

void Fixed::setRawbits( int const raw ) {
    std::cout << "setRawBits function called" << std::endl;
    _fixedPointValue = raw;
}
