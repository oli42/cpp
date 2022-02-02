/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:06:26 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/29 16:12:05 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    this->_type = "ice";
    return ;
}

Ice::Ice(std::string const & type)
{
    this->_type = type;
    return ;
}

Ice::Ice(const Ice & one) : AMateria ("ice")
{
    this->operator=(one);
    return ;
}

Ice::~Ice()
{
    return ;
}

//------------------------------------------------------------------------------

Ice & Ice::operator=(Ice const & one)
{
    this->_type = (one.getType());
    return (*this);
}   

AMateria * Ice::clone() const
{
    return (new Ice());
}

void	Ice::use(ICharacter & target) 
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    return ;
}

