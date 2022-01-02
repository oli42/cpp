#include "HumanB.hpp"
#include <string>
#include <iostream>
#include "Weapon.hpp"

HumanB::HumanB()
{
}

HumanB::HumanB(std::string name)
{
    this->_name = name;
}

HumanB::~HumanB()
{
}

void HumanB::attack(void)
{
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

//-------------------------------------------

std::string HumanB::getName(void) const
{
	return ( this->_name);
}

void HumanB::setName( std::string name )
{
	this->_name = name;
}

void HumanB::setWeapon(Weapon &aweapon)
{
    this->_weapon = &aweapon;
}