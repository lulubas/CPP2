/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 17:20:02 by lbastien          #+#    #+#             */
/*   Updated: 2024/06/22 17:07:34 by lbastien         ###   ########.fr       */
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
        Point& operator=( const Point &other ) = delete;
        ~Point();

        float getX( void ) const;
        float getY( void ) const;
        
    private:
        Fixed const _x;
        Fixed const _y;
};

#endif