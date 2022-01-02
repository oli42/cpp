#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>

class Zombie
{

    public:
        Zombie();
        Zombie(std::string str);
        ~Zombie();

        std::string getName(void);
        void setName(std::string);

        void announce(void) const;

    private:
        std::string _name;
};

        Zombie* zombieHorde( int N, std::string name );


#endif