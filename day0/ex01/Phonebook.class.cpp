#include "Phonebook.class.hpp"


Phonebook::Phonebook(void)
{

}

Phonebook::~Phonebook(void)
{

}

void Phonebook::addContact(void)
{
    this->_tab[nbr].add_info();
    Phonebook::nbr += 1;
}

void Phonebook::searchContact(void)
{
    int i;
    i = 0;

    if (nbr == 0)
    {
        std::cout << "Right now my Phonebook is empty / nothing to search for" << std::endl;
        std::cout << "When you are ready, enter a command." << std::endl;
        std::cout << "You have 3 options: ADD - SEARCH - EXIT" << std::endl;
    }
    else
    {
        std::cout << " index|" << " first name|" << " last name|" << " nickname| " << std::endl;
        while (i < nbr)
        {
            std::cout << i << "| " << this->_tab[i].get_first_name() << "| " << this->_tab[i].get_last_name() << "| " << this->_tab[i].get_nickname() << "| "  << std::endl;
            i++;    
        }
        get_index();
    }

}

void Phonebook::get_index(void)
{
    int i;
    i = -1;
    std::cout << "Which index would you consult?" << std::endl;
    std::cin >> i;
    if (i <= nbr && i >= 0)
        std::cout << this->_tab[i].get_first_name() << " | " << this->_tab[i].get_last_name() << " | " << this->_tab[i].get_nickname() << " | " << this->_tab[i].get_phone_nbr() << " | " << this->_tab[i].get_darkest_secret()<< std::endl;
    else
    {
        std::cout << "Your choice is not relevant." << std::endl;
        std::cout << "When you are ready, enter a command." << std::endl;
        std::cout << "You have 3 options: ADD - SEARCH - EXIT" << std::endl;
    }   
    std::cin.ignore();
}

int Phonebook::get_nbr(void)
{
    return Phonebook::nbr;
}

int Phonebook::nbr = 0;
