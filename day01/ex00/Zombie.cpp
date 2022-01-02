#include "Zombie.hpp"
#include <iostream>


Zombie::Zombie(void)
{
    std::cout << "zombie created on the stack!" << std::endl;

}

Zombie::Zombie(std::string str)
{
    this->_name = str;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " destroyed!" << std::endl;
}

void Zombie::announce(void) const
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..."  << std::endl;
}

//----------------------------------------------------------------------

std::string Zombie::getName()
{
    return (this->_name);
}

void Zombie::setName(std::string str)
{
    this->_name = str;
}