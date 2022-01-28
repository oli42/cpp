/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:06:12 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/28 21:06:13 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    this->_type = "cure";
    // std::cout << "  Cure Default constructor called" << std::endl;
    return ;
}

Cure::Cure(std::string const & type)
{
    this->_type = type;
    // std::cout << " Cure Parametrized constructor called" << std::endl;
    return ;
}

Cure::Cure(const Cure & one) : AMateria ("cure")
{
    this->operator=(one);
    // std::cout << "Cure Copy constructor called" << std::endl;
    return ;
}

Cure::~Cure()
{
    // std::cout << " Cure Destructor called" << std::endl;
    return ;
}

//------------------------------------------------------------------------------

Cure & Cure::operator=(Cure const & one)
{
    this->_type = (one.getType());
    return (*this);
}   

AMateria* Cure::clone() const
{
    return (new Cure());
}

void	Cure::use(ICharacter & target) 
{
	std::cout << "* Heals " << target.getName() << "'s wounds *" << std::endl;
}
