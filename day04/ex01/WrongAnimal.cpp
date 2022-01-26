/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:36:42 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/25 20:36:48 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->setType("WrongCatDog");
    std::cout << "Animal Default constructor called for " << this->getType() << std::endl;
}

WrongAnimal::WrongAnimal(std::string const & type) : _type(type)
{
    std::cout << "Animal Parametrized constructor called for " << this->getType() << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & one)
{
    this->operator=(one);    
    std::cout << "Animal Copy constructor called for " << this->getType() << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Animal Destructor called for " << this->getType() << std::endl;
}

//------------------------------------------------------------------------------

void WrongAnimal::makeSound() const
{
    std::cout << "pssssssi...." << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & one)
{
   std::cout << "Assignation operator called" << std::endl;
   this->_type = one.getType();
   
   return (*this);
}


//------------------------------------------------------------------------------

std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}


//------------------------------------------------------------------------------

void WrongAnimal::setType(std::string type)
{
    this->_type = type;
}

