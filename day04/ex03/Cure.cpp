/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:06:12 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/29 16:11:38 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    this->_type = "cure";
    return ;
}

Cure::Cure(std::string const & type)
{
    this->_type = type;
    return ;
}

Cure::Cure(const Cure & one) : AMateria ("cure")
{
    this->operator=(one);
    return ;
}

Cure::~Cure()
{
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
