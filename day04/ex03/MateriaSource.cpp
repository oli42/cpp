/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:07:43 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/28 21:07:44 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        this->_inventory[i] = NULL;
    }
	// std::cout << "MateriaSource default constructor called" << std::endl;
    return ;
}

MateriaSource::MateriaSource(MateriaSource const & one)
{
    this->operator=(one);
	// std::cout << "MateriaSource Copy constructor called" << std::endl;
    return ;
}

MateriaSource::~MateriaSource() 
{
	// std::cout << "  MateriaSource Destructor called" << std::endl;

	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
    return ;
}

//------------------------------------------------------------------------------

MateriaSource & MateriaSource::operator=(MateriaSource const & one)
{ 
    for (int i = 0; i < 4; i++)
		delete this->_inventory[i];

	for (int i = 0; i < 4; i++)
			this->_inventory[i] = one._inventory[i]->clone();

	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (m)
    {
        for(int i = 0; i < 4; i++)
            if (!this->_inventory[i])
            {
                this->_inventory[i] = m;
                break;
            }
        
    }
    return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] && (this->_inventory[i]->getType() == type))
        {
            return (this->_inventory[i]->clone());
        }
    }
    return (0);
}
