/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 11:25:08 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/23 11:25:09 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
    this->setName("no_name");
    this->setHitPoints(100);
    this->setEnergiePoints(50);
    this->setAttackDamage(20);

}

ScavTrap::ScavTrap(std::string const & name)
{
    std::cout << "ScavTrap Parametrized constructor called" << std::endl;
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergiePoints(50);
    this->setAttackDamage(20);
}


ScavTrap::ScavTrap(const ScavTrap & one) : ClapTrap(one)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    this->operator=(one);    
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Default destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & one)
{
   std::cout << "ScavTrap Assignation operator called" << std::endl;
   this->setName(one.getName());
   this->setHitPoints(one.getHitPoints());
   this->setEnergiePoints(one.getEnergiePoints());
   this->setAttackDamage(one.getAttackDamage());
   return (*this);
}

//------------------------------------------------------------------------------

void ScavTrap::attack(const std::string & target)
{
    if (this->getEnergiePoints() > 0)
    {
        std::cout << "ScavTrap " << this->getName() << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage!" << std::endl;
        this->setEnergiePoints(this->getEnergiePoints() - 1);
    }
    else
        std::cout << this->getName() << " is too short of energie points to attack anybody." << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->getName() << " is now on guate keeper mode." << std::endl;
}
