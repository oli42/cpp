#include "Karen.hpp"

Karen::Karen()
{

}

Karen::~Karen()
{

}

void Karen::complain(std::string level)
{
    for (int i = 0; i < 4; i++)
		if(!_tab[i].compare(level))
        {
            std::cout << "[ " << _tab[i] << " ]" << std::endl;
			(this->*_tabPtr[i])();
            i++;
            while (i < 4)
            {   
                std::cout << "[ " << _tab[i] << " ]" << std::endl;
			    (this->*_tabPtr[i])();
                i++;
            }
            return;
        }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}


void Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
    std::cout << "" << std::endl;
}

void Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
    std::cout << "" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
    std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
    std::cout << "" << std::endl;
}

void Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
    std::cout << "" << std::endl;
}