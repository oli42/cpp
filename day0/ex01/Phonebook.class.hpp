#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"
#include <iostream>
#include <iomanip>
#include <string>

 
class Phonebook 
{
    public:
            Phonebook();
            ~Phonebook();

            void addContact(void);
            void searchContact(void);
            void get_index(void);
            int check_index(std::string str);
            std::string idiot(void);
            void print_option(void) const;
            static int get_nbr();
            static int nbr;

    private:
            Contact _tab[8];
};

#endif