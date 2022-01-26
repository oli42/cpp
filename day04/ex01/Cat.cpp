/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:35:38 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/26 21:43:57 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->setType("Cat");
    this->_own_brain = new Brain();
    std::cout << "  Cat Default constructor called for " << this->getType() << std::endl;
}

Cat::Cat(std::string const & type) : _type (type)
{
    std::cout << "Cat Parametrized constructor called for " << this->getType() << std::endl;
    this->_own_brain = new Brain();

}

Cat::Cat(const Cat & one) : Animal ("Cat")
{
    this->operator=(one); 
    this->_own_brain = new Brain();   
    std::cout << "Cat Copy constructor called for " << this->getType() << std::endl;
}

Cat::~Cat()
{
    std::cout << "  Cat Destructor called for " << this->getType() << std::endl;
    delete this->_own_brain;
}

//------------------------------------------------------------------------------

void Cat::makeSound() const
{
    std::cout << "Miaouuuuu" << std::endl;
}

Cat & Cat::operator=(const Cat & one)
{
   std::cout << "Assignation operator called" << std::endl;
   this->_type = one.getType();
   this->_own_brain = new Brain(*one._own_brain);
   
   return (*this);
}

//------------------------------------------------------------------------------


//------------------------------------------------------------------------------

std::string Cat::getType(void) const
{
    return (this->_type);
}



//------------------------------------------------------------------------------

void Cat::setType(std::string type)
{
    this->_type = type;
}


