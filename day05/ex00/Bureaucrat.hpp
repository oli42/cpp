#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <exception>
#include <string>
#include <iostream>

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
        Bureaucrat & operator=(const Bureaucrat & one);
        const std::string getName() const;
        int getNote() const;
        void setNote(int note);

        class GradeTooHighException : public std::exception
        {
          
        };
        class GradeTooLowException : public std::exception
        {
            
        };

};
std::ostream & operator<<( std::ostream & os, const Bureaucrat & one);
#endif
