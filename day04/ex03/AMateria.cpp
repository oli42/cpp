/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:05:33 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/28 21:05:34 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    // std::cout << " AMateria Default constructor called" << std::endl;
    return ;
}

AMateria::AMateria(std::string const & type) : _type (type)
{
    // std::cout << "AMateria Parametrized constructor called" << std::endl;
    return ;
}

AMateria::AMateria(const AMateria & one)
{
    this->operator=(one);
    // std::cout << "AMateria Copy constructor called" << std::endl;
    return ;
}

AMateria::~AMateria()
{
    // std::cout << "AMateria Destructor called" << std::endl;
    return ;
}

AMateria & AMateria::operator=(const AMateria & one)
{
    this->_type = one._type;
    return (*this);
}

void    AMateria::use(ICharacter & target)
{
	(void)target;
}

std::string const & AMateria::getType() const
{
    return(this->_type);
}
//------------------------------------------------------------------------------


