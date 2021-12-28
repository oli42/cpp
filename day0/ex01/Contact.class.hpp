#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <string>

class Contact
{


public:
        Contact();
        ~Contact();
        
        void add_info();

        void set_first_name(std::string family_name);
        void set_last_name(std::string last_name);
        void set_nickname(std::string nickname);
        void set_phone_nbr(std::string phone_number);
        void set_darkest_secret(std::string darkest_secret);

        std::string get_first_name(void) const;
        std::string get_last_name(void) const;
        std::string get_nickname(void) const;
        std::string get_phone_nbr(void) const;
        std::string get_darkest_secret(void) const;
        

private:  
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_nbr;
        std::string _darkest_secret;


};

#endif
