/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:37:15 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/25 20:37:18 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->setType("WrongCat");
    std::cout << "WrongCat Default constructor called for " << this->getType() << std::endl;
}

WrongCat::WrongCat(std::string const & type) : _type (type)
{
    std::cout << "WrongCat Parametrized constructor called for " << this->getType() << std::endl;
}

WrongCat::WrongCat(const WrongCat & one) : WrongAnimal ("WrongCat")
{
    this->operator=(one);    
    std::cout << "WrongCat Copy constructor called for " << this->getType() << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called for " << this->getType() << std::endl;
}

//------------------------------------------------------------------------------

void WrongCat::makeSound() const
{
    std::cout << "Miaouuuuu" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat & one)
{
   std::cout << "Assignation operator called" << std::endl;
   this->_type = one.getType();
   
   return (*this);
}


//------------------------------------------------------------------------------

std::string WrongCat::getType(void) const
{
    return (this->_type);
}

//------------------------------------------------------------------------------

void WrongCat::setType(std::string type)
{
    this->_type = type;
}


