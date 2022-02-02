#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <exception>
#include <string>
#include <iostream>
#include "Form.hpp"
class Form;
class ShrubberyCreationForm;

class Bureaucrat 
{

    private:
        const std::string _name;
        int _note;

    public:
        Bureaucrat();
        Bureaucrat(const std::string & name, int note);
        Bureaucrat(Bureaucrat const & one);
        ~Bureaucrat();

        void increment();
        void decrement();
        void executeForm(Form const & form);
        void signForm(Form & one);

        Bureaucrat & operator=(const Bureaucrat & one);
        const std::string getName() const;
        int getNote() const;
        void setNote(int note);

        class GradeTooHighException : public std::exception
        {
          public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class StatusException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class SignException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };


};
std::ostream & operator<<( std::ostream & os, const Bureaucrat & one);
#endif