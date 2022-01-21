/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 22:17:15 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/19 22:17:16 by ochichep         ###   ########.fr       */
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

 Fixed::~Fixed(void)
 {
    std::cout << "destructor called" << std::endl;
 }
 
 Fixed & Fixed::operator=(const Fixed & one)
 {
    std::cout << "Assignation operator called" << std::endl;
     this->_fixed_point_value = one.getRawBits();
     return (*this);
 }

 int Fixed::getRawBits(void) const
 {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixed_point_value);
 }

void Fixed::setRawBits(int const raw)
{
    this->_fixed_point_value = raw;
}