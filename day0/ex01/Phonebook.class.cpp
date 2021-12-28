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
        print_option();
    }
    else
    { 
        std::cout << "|"; 
        std::cout << std::setw(10) << "index" << "|"; 
        std::cout << std::setw(10) << "first name" << "|"; 
        std::cout << std::setw(10) << "last name" << "|"; 
        std::cout << std::setw(10) << "nickname" << "|" << std::endl;
        while (i < nbr)
        {
            std::cout << "|"; 
            std::cout << std::setw(10) << i << "|";
            if (this->_tab[i].get_first_name().length() >= 10)
                std::cout << this->_tab[i].get_first_name().substr(0, 9) << "." << "|";
            else
                std::cout << std::setw(10) << this->_tab[i].get_first_name() << "|"; 
            if (this->_tab[i].get_last_name().length() >= 10)
                std::cout << this->_tab[i].get_last_name().substr(0, 9) << "." << "|";
            else 
                std::cout << std::setw(10) << this->_tab[i].get_last_name() << "|"; 
            if (this->_tab[i].get_nickname().length() >= 10)
                std::cout << this->_tab[i].get_last_name().substr(0, 9) << "." << "|" << std::endl;    
            else
                std::cout << std::setw(10) << this->_tab[i].get_nickname() << "|"  << std::endl;
            i++;    
        }
        get_index();
    }

}

void Phonebook::get_index(void)
{
    std::string str;
    int i;

    i = -1;
    
    std::cout << "Which index would you consult?" << std::endl;
    std::getline(std::cin, str);
    while (str.empty())
            str = idiot();
    while (check_index(str))
    {
        std::cout << "Must be a positive digit: " << std::endl;
        std::getline(std::cin, str);
        while (str.empty())
            str = idiot();
    }
    i = stoi(str);
    if (i <= nbr && i >= 0)
    {
        std::cout << this->_tab[i].get_first_name() << std::endl;
        std::cout << this->_tab[i].get_last_name() << std::endl;
        std::cout << this->_tab[i].get_nickname() << std::endl;
        std::cout << this->_tab[i].get_phone_nbr() << std::endl;
        std::cout << this->_tab[i].get_darkest_secret()<< std::endl;
        print_option();
    }
    else
    {
        std::cout << "This index has no value." << std::endl;
        print_option();
    }   
}

void Phonebook::print_option(void) const
{
    std::cout << "When you are ready, enter a command." << std::endl;
    std::cout << "You have 3 options: ADD - SEARCH - EXIT" << std::endl;
}

int Phonebook::get_nbr(void)
{
    return Phonebook::nbr;
}

int Phonebook::check_index(std::string str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if (!isdigit(str[i]))
            return (1);
        i++;    
    }
    return (0);
}

std::string Phonebook::idiot(void)
{
    std::string str;

    std::cout << "Stop playing full, please. Try again" << std::endl;
    std::getline(std::cin, str);
    return(str);
}

int Phonebook::nbr = 0;
