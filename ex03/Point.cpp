/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 17:19:47 by lbastien          #+#    #+#             */
/*   Updated: 2024/06/22 17:07:40 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() {}

Point::Point( const float x, const float y ) : _x( x ), _y( y ) {}

Point::Point( const Point &other ) : _x( other._x), _y( other._y ) {}

Point::~Point() {}

float Point::getX( void ) const {
    return _x.toFloat();
}

float Point::getY( void ) const {
    return _y.toFloat();
}