/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 22:16:33 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/19 22:16:34 by ochichep         ###   ########.fr       */
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
        
        Fixed & operator=(const Fixed & one);

    //----Operateurs de comparaison---------------------------------------------

        bool operator<(const Fixed & one) const;
        bool operator>(const Fixed & one) const;
        bool operator<=(const Fixed & one) const;
        bool operator>=(const Fixed & one) const;
        bool operator==(const Fixed & one) const;
        bool operator!=(const Fixed & one) const;

    //----Operateurs arithmetiques----------------------------------------------
       
        Fixed operator+(const Fixed & one);
        Fixed operator-(const Fixed & one);
        Fixed operator*(const Fixed & one);
        Fixed operator/(const Fixed & one);

        Fixed & operator++();
        Fixed operator++(int);
        Fixed & operator--();
        Fixed operator--(int);

        static const Fixed &	min(const Fixed & one, const Fixed & two);
        static const Fixed &	max(const Fixed & one, const Fixed & two);
        static Fixed &			min(Fixed & one, Fixed & two);
        static Fixed &			max(Fixed & one, Fixed & two);
        
        float toFloat(void) const;
        int toInt(void) const;

    //--------------get/set-----------------------------------------------------    
        
        int getRawBits(void) const;
        void setRawBits(int const raw);


};

        std::ostream & operator<<(std::ostream & o, const Fixed & one);

#endif