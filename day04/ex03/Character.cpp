/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:05:53 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/28 21:05:54 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    for(int i = 0; i < 4; i++)
    {
        this->_inventory[i] = NULL;
    }
    this->_name = "------";
	// std::cout << "Character default constructor called" << std::endl;
    return ;
}

Character::Character(std::string const & name) : _name (name)
{
    for(int i = 0; i < 4; i++)
    {
        this->_inventory[i] = NULL;
    }
    this->_name = name;
	// std::cout << "Character Parametrized constructor called" << std::endl;
    return ;
}

Character::Character(Character const & one)
{
    this->operator=(one);
	// std::cout << "Character Copy constructor called" << std::endl;
    return ;
}

Character::~Character() 
{
	// std::cout << "Character Destructor called" << std::endl;

	for (int i = 0; i < 4; i++)
		delete _inventory[i];
    return ;
}

//------------------------------------------------------------------------------

Character & Character::operator=(Character const & one)
{ 
	this->_name = one._name;

	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];

	for (int i = 0; i < 4; i++)
			this->_inventory[i] = one._inventory[i]->clone();

	return (*this);
}

void Character::equip(AMateria* m)
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

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        this->_inventory[idx] = NULL;
    }
    return ;
}

void Character::use(int idx, ICharacter & target)
{
    if (idx >= 0 && idx < 4)
        if(this->_inventory[idx] != NULL)
            this->_inventory[idx]->use(target);
    return ;
}


std::string const & Character::getName() const
{
    return (this->_name);
}
