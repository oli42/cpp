#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack(void)
{
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

//-------------------------------------------

void HumanB::setWeapon(Weapon const & aweapon)
{
    this->_weapon =  & aweapon;
}
