/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:11:07 by lbastien          #+#    #+#             */
/*   Updated: 2024/06/18 16:35:15 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
    public:
        Fixed();
        Fixed(const Fixed &other);

        ~Fixed();

    private:
        int _fixedPointValue;
        static const int _fractionalBits = 8;
};

#endif