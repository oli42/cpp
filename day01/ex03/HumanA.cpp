#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon const & aweapon) : _name(name), _weapon(aweapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
