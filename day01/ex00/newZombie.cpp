#include "Zombie.hpp"
#include <iostream>

Zombie *newZombie(std::string str)
{
    Zombie *zob = new Zombie(str);
    std::cout << str << " zombie created on the heap via copy constructor!" << std::endl;
    return (zob);
}