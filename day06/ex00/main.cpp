#include <iostream>
#include <string>
#include <limits>
#include "Conversion.hpp"

int main (int argc, char **argv)
{
    if (argc == 2)
    {
        try
        {
            int i = 0;
            Conversion one(static_cast<const std::string>(argv[1]));
            one.check_literale(static_cast<const std::string>(argv[1]));
            i = one.identify_literale(static_cast<const std::string>(argv[1]));
            one.convert_literale(static_cast<const std::string>(argv[1]), i);
        }
        catch (const std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }  
    }
        else if (argc == 1 ?  std::cout << "No argument" << std::endl : std::cout << "Too many arguments" << std::endl)
  return 0;
}