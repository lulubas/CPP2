/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:12:58 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/24 19:06:05 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
    Fixed crossABAP = ((b.getX() - a.getX()) * (point.getY() - a.getY())) - ((b.getY() - a.getY()) * (point.getX() - a.getX()));
    Fixed crossBCBP = ((c.getX() - b.getX()) * (point.getY() - b.getY())) - ((c.getY() - b.getY()) * (point.getX() - b.getX()));
    Fixed crossCACP = ((a.getX() - c.getX()) * (point.getY() - c.getY())) - ((a.getY() - c.getY()) * (point.getX() - c.getX()));
    
    if (crossABAP >= 0 && crossABAP >= 0 && crossABAP >= 0)
        return true;
    else if (crossABAP >= 0 && crossABAP >= 0 && crossABAP <= 0)
        return false;
    else
        return 0;   
}