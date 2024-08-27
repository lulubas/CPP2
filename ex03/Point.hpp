/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 17:20:02 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/27 16:10:48 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
    public:
        Point();
        Point(const float x, const float y );
        Point( const Point& other );
        Point& operator=( const Point &other );
        ~Point();

        int getX( void ) const;
        int getY( void ) const;
        
    private:
        Fixed _x;
        Fixed _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif