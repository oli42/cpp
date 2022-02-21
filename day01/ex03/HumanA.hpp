#ifndef HUMMANA_HPP
# define HUMMANA_HPP
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private:
            std::string _name;
            Weapon const &_weapon;
    public:
            HumanA(std::string  name, Weapon const & aweapon);
            ~HumanA();

            void attack();

};

#endif
