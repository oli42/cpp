#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *tab;
    
    if (N > 0)
    {
        tab = new Zombie[N];
        for (int i = 0; i < N; i++)
        {
            tab[i].setName(name + "_" + std::to_string(i));
        }
        return(tab);
    }
    return (NULL);
}