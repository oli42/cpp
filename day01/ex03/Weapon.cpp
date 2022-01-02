#include "Weapon.hpp"
#include <string>
#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon()
{
}


Weapon::Weapon(std::string type)
{
    this->_type = type;
}

Weapon::~Weapon()
{

}

std::string Weapon::getType()
{
    return(this->_type);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}