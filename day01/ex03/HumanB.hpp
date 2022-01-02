#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <string>
#include "Weapon.hpp"

class HumanB
{
    public:
            HumanB();
            HumanB(std::string name);
            ~HumanB();

            void attack();
            std::string getName(void) const;
            void setName(std::string name);
            void setWeapon(Weapon &aweapon);

    private:
            std::string _name;
            Weapon*  _weapon;

};
#endif