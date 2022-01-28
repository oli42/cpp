/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:16:01 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/27 09:30:29 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    this->setType("CatDog");
    std::cout << "AAnimal Default constructor called for " << this->getType() << std::endl;
}

AAnimal::AAnimal(std::string const & type) : _type(type)
{
    std::cout << "AAnimal Parametrized constructor called for " << this->getType() << std::endl;
}

AAnimal::AAnimal(const AAnimal & one)
{
    this->operator=(one);    
    std::cout << "AAnimal Copy constructor called for " << this->getType() << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal Destructor called for " << this->getType() << std::endl;
}

//------------------------------------------------------------------------------

void AAnimal::makeSound() const
{
    std::cout << "(....)\n" << std::endl;
}

AAnimal & AAnimal::operator=(const AAnimal & one)
{
   std::cout << "Assignation operator called" << std::endl;
   this->_type = one.getType();
   
   return (*this);
}

//------------------------------------------------------------------------------


std::string AAnimal::getType(void) const
{
    return (this->_type);
}


//------------------------------------------------------------------------------

void AAnimal::setType(std::string type)
{
    this->_type = type;
}

