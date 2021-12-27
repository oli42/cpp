#include "Phonebook.class.hpp"

int main()
{
    Phonebook instance;
    std::string cmd;


    while (cmd.compare("EXIT"))
    {
        std::cout << "When you are ready, enter a command." << std::endl;
        std::cout << "You have 3 options: ADD - SEARCH - EXIT" << std::endl;
        std::cin >> cmd;

        if (!cmd.compare("ADD"))
        {
            if (instance.get_nbr_contacts() < 8 )
                instance.addContact();
            else
                std::cout << "My Phonebook is full!!" << std::endl;
        }
        else if (!cmd.compare("SEARCH"))
            instance.searchContact();
        else if(!cmd.compare("EXIT"))
            break;
        else
            std::cout << "Enter a proper command, please." << std::endl;
    }
    std::cout << "Ciao bello!!" << std::endl;

}