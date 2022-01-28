/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:36:02 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/27 09:20:03 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _own_brain (new Brain())
{
    this->setType("Dog");
    std::cout << "  Dog Default constructor called for " << this->getType() << std::endl;
}

Dog::Dog(std::string const & type) : _type(type), _own_brain (new Brain())
{
    std::cout << "Dog Parametrized constructor called for " << this->getType() << std::endl;
}

Dog::Dog(const Dog & one) : AAnimal ("Dog")
{
    this->operator=(one); 
    std::cout << "Dog Copy constructor called for " << this->getType() << std::endl;
}

Dog::~Dog()
{
    std::cout << "  Dog Destructor called for " << this->getType() << std::endl;
    delete this->_own_brain; 
}

//-------------------------------------------------------------------------------

void Dog::makeSound() const
{
    std::cout << "Wouaf! Wouaf!" << std::endl;
}


Dog & Dog::operator=(const Dog & one)
{
   std::cout << "Assignation operator called" << std::endl;
   this->_type = one.getType();
   this->_own_brain = new Brain(*one._own_brain);
   
   return (*this);
}

//------------------------------------------------------------------------------

std::string Dog::getType(void) const
{
    return (this->_type);
}

//------------------------------------------------------------------------------

void Dog::setType(std::string type)
{
    this->_type = type;
}


