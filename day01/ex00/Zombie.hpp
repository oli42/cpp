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

        void randomChump(std::string name);
        Zombie *newZombie(std::string str);


#endif