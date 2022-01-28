/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:06:26 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/28 21:06:27 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    // std::cout << "  Ice Default constructor called" << std::endl;
    this->_type = "ice";
    return ;
}

Ice::Ice(std::string const & type)
{
    // std::cout << " Ice Parametrized constructor called" << std::endl;
    this->_type = type;
    return ;
}

Ice::Ice(const Ice & one) : AMateria ("ice")
{
    this->operator=(one);
    // std::cout << "Ice Copy constructor called" << std::endl;
    return ;
}

Ice::~Ice()
{
    // std::cout << " Ice Destructor called" << std::endl;
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

