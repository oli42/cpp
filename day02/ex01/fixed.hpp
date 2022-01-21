/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 22:16:53 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/19 22:16:54 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _fixed_point_value;
        static const int _fractionnal_part = 8;

    public:
        Fixed();
        Fixed(const Fixed & one);
        Fixed(const int one);
        Fixed(const float one);
        ~Fixed();
        
        Fixed& operator=(const Fixed & one);


        float toFloat(void) const;
        int toInt(void) const;
        
        int getRawBits(void) const;
        void setRawBits(int const raw);


};
        std::ostream & operator<<(std::ostream & o, const Fixed & one);

#endif