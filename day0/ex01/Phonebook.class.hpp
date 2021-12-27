#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"
#include <iostream>
#include <string>


class Phonebook 
{
    public:
            Phonebook();
            ~Phonebook();

            void addContact(void);
            void searchContact(void) const;
            static int get_nbr_contacts();
            static int nbr_contacts;

    private:
            Contact _tab[8];
};

#endif