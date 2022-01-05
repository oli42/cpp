#include "Karen.hpp"

int main(int argc, char** argv)
{
    std::string option;
    Karen she;
    
    if (argc == 2)
        she.complain(argv[1]);
    else
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    return (0);
}