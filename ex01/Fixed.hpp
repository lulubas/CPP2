/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:11:07 by lbastien          #+#    #+#             */
/*   Updated: 2024/06/21 12:56:03 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    public:
        Fixed();
        Fixed( const int );
        Fixed( const float );
        Fixed( const Fixed &other );
        Fixed& operator=( const Fixed &other );
        friend std::ostream& operator<<( std::ostream& stream, const Fixed& other );
       ~Fixed();

        int                 toInt( void ) const;
        float               toFloat( void ) const;

    private:
        int                 _fixedPointValue;
        static const int    _fractionalBits = 8;
        int                 _getRawBits( void ) const;
        void                _setRawbits( int const raw );

};

#endif