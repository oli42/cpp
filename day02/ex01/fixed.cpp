/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 22:16:47 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/19 22:16:48 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed(void)
{
   std::cout << "default constructor called" << std::endl;
   this->_fixed_point_value = 0;
}

Fixed::Fixed(const Fixed& one)
{
   std::cout << "copy constructor called" << std::endl;
   this->operator=(one);
}

Fixed::Fixed(const int one) : _fixed_point_value ((one * (1 << this->_fractionnal_part)))
{
   std::cout << "int constructor called" << std::endl;
}

Fixed::Fixed(const float one) : _fixed_point_value (round(one * (1 << this->_fractionnal_part)))
{
   std::cout << "float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
   std::cout << "destructor called" << std::endl;
}
   
//----------------------------------------------------------------
Fixed& Fixed::operator=(const Fixed& one)
{
   std::cout << "Assignation operator called" << std::endl;
   this->_fixed_point_value = one.getRawBits();
   return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& one)
{
   return (os << one.toFloat());
}

//----------------------------------------------------------------

float Fixed::toFloat (void) const
{
	return (((float)this->_fixed_point_value / (float)(1 << this->_fractionnal_part)));
}

int Fixed::toInt (void) const
{
	return ((int)(this->_fixed_point_value >> (int)this->_fractionnal_part));
}
//----------------------------------------------------------------

 int Fixed::getRawBits(void) const
 {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixed_point_value);
 }

void Fixed::setRawBits(int const raw)
{
    this->_fixed_point_value = raw;
}