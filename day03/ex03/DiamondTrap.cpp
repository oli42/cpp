/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:49:00 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/24 16:57:47 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <cstring>


DiamondTrap::DiamondTrap() : _name ("no_name")
{
    
    this->_hit_points = this->FragTrap::getHitPoints();
	this->_energie_points = this->ScavTrap::getEnergiePoints();
	this->_attack_damage = this->FragTrap::getAttackDamage();
    std::cout << "DiamondTrap Default constructor called for " << this->getName() << std::endl;

}

DiamondTrap::DiamondTrap(std::string const & name) 
{
    this->_name = name;
   
    char * cstr = new char [name.length()+1];
    std::strcpy (cstr, name.c_str());
    char *ok = strcat(cstr, "_clap_name");
    this->ClapTrap::setName(ok);
    delete [] cstr;
    
    this->_hit_points = this->FragTrap::getHitPoints();
	this->_energie_points = this->ScavTrap::getEnergiePoints();
	this->_attack_damage = this->FragTrap::getAttackDamage();
    std::cout << "DiamondTrap Parametrized constructor called for " << this->getName() << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & one) : ClapTrap(one), ScavTrap(one), FragTrap(one)
{
    this->operator=(one);    
    std::cout << "DiamondTrap Copy constructor called for " << this->getName() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Default destructor called for " << this->getName() << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & one)
{
   std::cout << "DiamondTrap Assignation operator called" << std::endl;
   this->setName(one.getName());
   this->setHitPoints(one.getHitPoints());
   this->setEnergiePoints(one.getEnergiePoints());
   this->setAttackDamage(one.getAttackDamage());
   return (*this);
}

//------------------------------------------------------------------------------

void DiamondTrap::attack(const std::string & target)
{
    DiamondTrap tmp;
    tmp = *this;
    tmp.ScavTrap::attack(target);
}

std::string DiamondTrap::getName(void) const
{
    return (this->_name);
}

void DiamondTrap::whoAmI(void) const
{
    std::cout  << "DiamondTrap name:  " << this->getName() << std::endl;
    std::cout  << "ClapTrap name:  " << this->ClapTrap::getName() << std::endl;
    
}
