/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:05:33 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/29 16:10:30 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    return ;
}

AMateria::AMateria(std::string const & type) : _type (type)
{
    return ;
}

AMateria::AMateria(const AMateria & one)
{
    this->operator=(one);
    return ;
}

AMateria::~AMateria()
{
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


