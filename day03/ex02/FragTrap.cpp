/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:49:59 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/24 16:18:25 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default constructor called for " << this->getName() << std::endl;
    this->setName("no_name");
    this->setHitPoints(100);
    this->setEnergiePoints(100);
    this->setAttackDamage(30);

}

FragTrap::FragTrap(std::string const & name)
{
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergiePoints(100);
    this->setAttackDamage(30);
    std::cout << "FragTrap Parametrized constructor called for " << this->getName() << std::endl;
}


FragTrap::FragTrap(const FragTrap & one) : ClapTrap(one)
{
    this->operator=(one);    
    std::cout << "FragTrap Copy constructor called for " << this->getName() << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Default destructor called for " << this->getName() << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & one)
{
   std::cout << "FragTrap Assignation operator called" << std::endl;
   this->setName(one.getName());
   this->setHitPoints(one.getHitPoints());
   this->setEnergiePoints(one.getEnergiePoints());
   this->setAttackDamage(one.getAttackDamage());
   return (*this);
}

//------------------------------------------------------------------------------

void FragTrap::highFivesGuys(void)
{
    std::cout << "High five!" << std::endl;
}
