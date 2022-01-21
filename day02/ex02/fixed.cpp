/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 22:16:16 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/20 18:25:02 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed(void) : _fixed_point_value (0)
{
   std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & one)
{
   std::cout << "copy constructor called" << std::endl;
   this->operator=(one);
}

Fixed::Fixed(const int one) : _fixed_point_value ((one * (1 << this->_fractionnal_part)))
{
   std::cout << "int constructor called" << std::endl;
}

// Fixed::Fixed(const float one) : _fixed_point_value (round(one * (2^8)))
Fixed::Fixed(const float one) : _fixed_point_value (round(one * (1 << this->_fractionnal_part)))
{
   std::cout << "float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
   std::cout << "destructor called" << std::endl;
}
   
//------------------------------------------------------------------------------

Fixed & Fixed::operator=(const Fixed & one)
{
   std::cout << "Assignation operator called" << std::endl;
   this->_fixed_point_value = one.getRawBits();
   return (*this);
}

std::ostream & operator<<(std::ostream & os, const Fixed & one)
{
   return (os << one.toFloat());
}

//----Operateurs de comparaison------------------------------------------------------------

bool Fixed::operator<(const Fixed & one) const
{
   return(this->_fixed_point_value < one.getRawBits());
}

bool Fixed::operator>(const Fixed & one) const
{
   return(this->_fixed_point_value > one.getRawBits());
}

bool Fixed::operator<=(const Fixed & one) const
{
   return(this->_fixed_point_value <= one.getRawBits());
}

bool Fixed::operator>=(const Fixed & one) const
{
   return(this->_fixed_point_value >= one.getRawBits());
}

bool Fixed::operator==(const Fixed & one) const
{
   return(this->_fixed_point_value == one.getRawBits());
}

bool Fixed::operator!=(const Fixed & one) const
{
   return(this->_fixed_point_value != one.getRawBits());
}

//---Operateurs arithmetiques------------------------------------------------------------

Fixed Fixed::operator+(const Fixed & one)
{
   Fixed tmp;
   tmp.setRawBits((this->getRawBits() + one.getRawBits()));
   return (tmp);
}

Fixed Fixed::operator-(const Fixed & one)
{
   Fixed tmp;
   tmp.setRawBits((this->getRawBits() - one.getRawBits()));
   return (tmp);
}

Fixed Fixed::operator*(const Fixed & one)
{
   Fixed tmp;
   tmp.setRawBits((this->getRawBits() * one.getRawBits()) * 1 >> this->_fractionnal_part);
   return (tmp);
}

Fixed Fixed::operator/(const Fixed & one)
{
   Fixed tmp;
   tmp.setRawBits((this->getRawBits() * (1 << this->_fractionnal_part)) / one.getRawBits()) ;
   return (tmp);
}

//-----------------------pre/post increment-------------------------------------

Fixed & Fixed::operator++()
{
   this->setRawBits(this->getRawBits() * (1 << this->_fractionnal_part));
   this->_fixed_point_value++;
   return (*this);
}

Fixed  Fixed::operator++(int)
{
   Fixed tmp;
   tmp.setRawBits(this->_fixed_point_value++);
   return (tmp);
}

Fixed &  Fixed::operator--()
{
   this->setRawBits(this->getRawBits() * (1 << this->_fractionnal_part));
   this->_fixed_point_value--;
   return (*this);
}

Fixed  Fixed::operator--(int)
{
   Fixed tmp;
   tmp.setRawBits(this->_fixed_point_value--);
   return (tmp);
}

//-----------------Max/Min------------------------------------------------------

const Fixed &	Fixed::min(const Fixed & one, const Fixed  & two) 
{
	if (one._fixed_point_value < two._fixed_point_value)
		return one;
	else
		return two;
}

Fixed &	Fixed::min(Fixed & one, Fixed  & two) 
{
	if (one._fixed_point_value < two._fixed_point_value)
		return one;
	else
		return two;
}

const Fixed &	Fixed::max(const Fixed & one, const Fixed  & two) 
{
	if (one._fixed_point_value > two._fixed_point_value)
		return one;
	else
		return two;
}

Fixed &	Fixed::max(Fixed & one, Fixed  & two) 
{
	if (one._fixed_point_value > two._fixed_point_value)
		return one;
	else
		return two;
}

//------------------------------------------------------------------------------

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