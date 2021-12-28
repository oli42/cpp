#include <iostream>
#include "Contact.class.hpp"


Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void Contact::add_info()
{
    std::string input;

    std::cout << "First name: " << std::endl;
    std::getline(std::cin, input);
    while (input.empty())
        input = full();
    set_first_name(input);
    std::cout << "Last name: " << std::endl;
    std::getline(std::cin, input);
    while (input.empty())
        input = full();
    set_last_name(input);
    std::cout << "Nickname: " << std::endl;
    std::getline(std::cin, input);
    while (input.empty())
        input = full();
    set_nickname(input);
    std::cout << "Phone number: " << std::endl;
    std::getline(std::cin, input);
    while (input.empty())
        input = full();
    while (check_phone_nbr(input))
    {
        std::cout << "Must be a positive digit: " << std::endl;
        std::getline(std::cin, input);
        while (input.empty())
            input = full();
    }
    set_phone_nbr(input);
    std::cout << "Darkest secret: " << std::endl;
    std::getline(std::cin, input);
    while (input.empty())
        input = full();
    set_darkest_secret(input);
    system("clear");
    std::cout << "Contact added. When you are ready, enter a command." << std::endl;
    std::cout << "You have 3 options: ADD - SEARCH - EXIT" << std::endl;
    // std::cin.ignore();
    
}

//--------------------------------------------------------------

void Contact::set_first_name(std::string first_name)
{
    this->_first_name = first_name;
}

void Contact::set_last_name(std::string last_name)
{
    this->_last_name = last_name;
}

void Contact::set_nickname(std::string nickname)
{
    this->_nickname = nickname;
}

void Contact::set_phone_nbr(std::string phone_nbr)
{
    this->_phone_nbr = phone_nbr;
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
    this->_darkest_secret = darkest_secret;
}

//--------------------------------------------------------------

std::string Contact::get_first_name(void) const
{
    return (this->_first_name);
}

std::string Contact::get_last_name(void) const
{
    return (this->_last_name);
}

std::string Contact::get_nickname(void) const
{
    return (this->_nickname);
}

std::string Contact::get_phone_nbr(void) const
{
    return (this->_phone_nbr);
}

std::string Contact::get_darkest_secret(void) const
{
    return (this->_darkest_secret);
}

int Contact::check_phone_nbr(std::string str)
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

std::string Contact::full(void)
{
    std::string str;

    std::cout << "Stop playing full, please. Try again" << std::endl;
    std::getline(std::cin, str);
    return(str);
}
