/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 17:19:47 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/24 18:09:11 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() {}

Point::Point( const int x, const int y ) : _x( x ), _y( y ) {}

Point::Point( const Point &other ) : _x( other._x), _y( other._y ) {}

Point& Point::operator=( const Point &other ) {
    this->_x = other._x;
    this->_y = other._y;
    return *this;
};

Point::~Point() {}

int Point::getX( void ) const {
    return _x.toInt();
}

int Point::getY( void ) const {
    return _y.toInt();
}