#include "Karen.hpp"

int main(int argc, char** argv)
{
    std::string option;
    Karen she;

    std::cout << "During this test, in order to get a result you have to choose whithin this 4 options:" << std::endl;
    std::cout << "DEBUG | INFO | WARNING | ERROR" << std::endl;
    std::getline(std::cin, option);
    she.complain(option);
    return (0);
}