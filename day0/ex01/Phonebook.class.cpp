#include "Phonebook.class.hpp"


Phonebook::Phonebook(void)
{
    std::cout << "*** building instance with constructor ***" << std::endl;

}

Phonebook::~Phonebook(void)
{

    std::cout << "*** deleted instance with destructor ***" << std::endl;

}

void    addContact(void)
{
    std::cout << "adding contact" << std::endl;

    Phonebook::nbr_contacts += 1;
    return ;
}

void    searchContact(void)
{
    std::cout << "searching contact" << std::endl;

}

int Phonebook::get_nbr_contacts(void)
{
    return Phonebook::nbr_contacts;
}

int Phonebook::nbr_contacts = 0;