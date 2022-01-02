#ifndef HUMMANA_HPP
# define HUMMANA_HPP
#include <string>
#include "Weapon.hpp"

class HumanA
{
    public:
            HumanA(std::string name, Weapon &aweapon);
            ~HumanA();

            void attack();
            std::string getName( void ) const;
            std::string getWeapon(void) const;
            void setName(std::string name);

    private:
            std::string _name;
            Weapon &_weapon;


};

#endif