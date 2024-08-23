/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:58:59 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/23 12:30:54 by lbastien         ###   ########.fr       */
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
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &other) {
        _fixedPointValue = other._fixedPointValue;        
    }
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) {
    std::cout << "getRawBits member function called" << std::endl;
    return _fixedPointValue;
}

void Fixed::setRawbits( int const raw ) {
    std::cout << "setRawBits member function called" << std::endl;
    _fixedPointValue = raw;
}
