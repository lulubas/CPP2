/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 17:20:02 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/24 18:14:10 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
    public:
        Point();
        Point(const int x, const int y );
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