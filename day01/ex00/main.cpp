#include "Zombie.hpp"
#include <iostream>
#include <string>


int main()
{
    Zombie instance;

    Zombie *ptr;
    ptr = newZombie("olive");

    instance.setName("you");
    instance.announce();

    randomChump("popeye");


    delete(ptr);
    

    return (0);
}