#ifndef KAREN_HPP
# define KAREN_HPP
#include <string>
#include <iostream>
#include <fstream>


class Karen 
{
    public:
        Karen();
        ~Karen();
        void complain(std::string level);


    private:
        std::string _tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        void (Karen:: *_tabPtr [4])() = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

};
#endif