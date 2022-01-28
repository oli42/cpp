/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:35:02 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/27 09:02:25 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->setType("CatDog");
    std::cout << "Animal Default constructor called for " << this->getType() << std::endl;
}

Animal::Animal(std::string const & type) : _type(type)
{
    std::cout << "Animal Parametrized constructor called for " << this->getType() << std::endl;
}

Animal::Animal(const Animal & one)
{
    this->operator=(one);    
    std::cout << "Animal Copy constructor called for " << this->getType() << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called for " << this->getType() << std::endl;
}

//------------------------------------------------------------------------------

void Animal::makeSound() const
{
    std::cout << "(....)\n" << std::endl;
}

Animal & Animal::operator=(const Animal & one)
{
   std::cout << "Assignation operator called" << std::endl;
   this->_type = one.getType();
   
   return (*this);
}

//------------------------------------------------------------------------------



//------------------------------------------------------------------------------

std::string Animal::getType(void) const
{
    return (this->_type);
}


//------------------------------------------------------------------------------

void Animal::setType(std::string type)
{
    this->_type = type;
}

