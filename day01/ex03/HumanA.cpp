#include "HumanA.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(std::string name, Weapon &aweapon) : _weapon (aweapon)
{
    this->_name = name;
}

HumanA::~HumanA()
{

}

void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}

std::string HumanA::getName(void) const
{
	return (this->_name);
}

std::string HumanA::getWeapon(void) const
{
	return (this->_weapon.getType());
}

void HumanA::setName(std::string name)
{
	this->_name = name;
}