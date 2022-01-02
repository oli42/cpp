#include "Zombie.hpp"
#include <iostream>
#include <string>


int main()
{
    Zombie *ptr;
    int N;

    N = 3;
    ptr = zombieHorde(N, "oli");
    if (ptr == NULL)
    {
        std::cout << "No zombie around here." << std::endl;
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            ptr[i].announce();
        }
    }
    delete []ptr;
    return (0);
}