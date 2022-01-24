/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 11:25:28 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/24 17:00:21 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("no_name"), _hit_points(10), _energie_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap Default constructor called for "  << this->getName() << std::endl;
}

ClapTrap::ClapTrap(std::string const & name) : _name (name), _hit_points(10), _energie_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap Parametrized constructor called for "  << this->getName()<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & one)
{
    this->operator=(one);    
    std::cout << "ClapTrap Copy constructor called for " << this->getName() << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called for " << this->getName() << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & one)
{
   std::cout << "Assignation operator called" << std::endl;
   this->_name = one.getName();
   this->_hit_points = one.getHitPoints();
   this->_energie_points = one.getEnergiePoints();
   this->_attack_damage = one.getAttackDamage();
   return (*this);
}

//------------------------------------------------------------------------------

void ClapTrap::attack(const std::string & target)
{
    if (this->_energie_points > 0)
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage!" << std::endl;
        this->_energie_points -= 1;
    }
    else
        std::cout << this->_name << " is too short of energie points to attack anybody." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points > 0)
    {
    std::cout << "ClapTrap " << this->_name << " sustains " << amount << " points of damage." << std::endl;
    if (amount >= this->_hit_points)
        this->_hit_points = 0;
    else
        this->_hit_points -= amount;
    }
    else
        std::cout << this->_name << " is already dead :O" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap repaired itself, getting back " << amount << " points of energie." << std::endl;
    this->setHitPoints(this->getHitPoints() + amount);
    this->_energie_points -= 1;
}

//------------------------------------------------------------------------------

std::string ClapTrap::getName(void) const
{
    return (this->_name);
}

unsigned int ClapTrap::getHitPoints(void) const
{
    return (this->_hit_points);
}

unsigned int ClapTrap::getEnergiePoints(void) const
{
    return (this->_energie_points);
}

unsigned int ClapTrap::getAttackDamage(void) const
{
    return (this->_attack_damage);
}

//------------------------------------------------------------------------------

void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

void ClapTrap::setHitPoints(unsigned int const point)
{
    this->_hit_points = point;
}

void ClapTrap::setEnergiePoints(unsigned int const point)
{
    this->_energie_points = point;
}

void ClapTrap::setAttackDamage(unsigned int const point)
{
    this->_attack_damage = point;
}