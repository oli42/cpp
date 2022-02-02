#ifndef INTERN_HPP
# define INTERN_HPP
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <exception>

class Intern
{
    public:
        Intern();
        Intern(Intern const & one);
        ~Intern();

        Intern & operator=(Intern const & one);
        Form * makeForm(std::string const & concretForm, std::string const & target);

        class InternException : public std::exception
        {
          public:
                virtual const char* what() const throw();
        };

};
#endif