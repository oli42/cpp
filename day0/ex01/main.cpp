#include "Phonebook.class.hpp"
#include <unistd.h>

int main()
{
    Phonebook instance;
    std::string cmd;

    std::cout << "****   MY AWSOME PHONEBOOK   ****" << std::endl;
    instance.print_option();
    while (cmd.compare("EXIT"))
    {
        std::getline(std::cin, cmd);
        if (!cmd.compare("ADD"))
        {
            if (instance.get_nbr() < 8 )
                instance.addContact();
            else
            {
                std::cout << "My Phonebook is full!! I will start to replace data." << std::endl;
                Phonebook::nbr = 0;
                instance.addContact();
            }
        }
        else if (!cmd.compare("SEARCH"))
            instance.searchContact();
        else if(!cmd.compare("EXIT"))
            break;
        else if (cmd.empty())
            std::cout << "Stop playing full, please." << std::endl;
        else
            std::cout << "Enter a proper command, please." << std::endl;
    }
    std::cout << "......." << std::endl;

}