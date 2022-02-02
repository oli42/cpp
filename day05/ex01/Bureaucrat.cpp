#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string & name, int note) : _name (name)
{
    _note = note;
    if (this->_note < 1)  throw GradeTooHighException();
    else if (this->_note > 150) throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & one)
{
    this->operator=(one);
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & one)
{
    this->_note = one.getNote();
    return (*this);
}

//------------------------------------------------------------------------------

void Bureaucrat::increment()
{
    this->setNote(this->_note -= 1);
}

void Bureaucrat::decrement()
{
    this->setNote(_note += 1);
}

//------------------------------------------------------------------------------

const std::string  Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getNote() const
{
    return (this->_note);
}

void Bureaucrat::setNote(int note)
{
    this->_note = note;
    if (this->_note < 1)  throw GradeTooHighException();
    else if (this->_note > 150) throw GradeTooLowException();
}

//------------------------------------------------------------------------------

std::ostream & operator<<(std::ostream & os, const Bureaucrat & one)
{
    os << one.getName() << ", bureaucrat grade: " << one.getNote();
    return (os);
}

void Bureaucrat::signForm(Form & one)
{
    try
    {
        one.beSigned(*this);
        std::cout << this->getName() << " signs " << one.getName() << std::endl;

    }
    catch (std::exception & e)
    {
        std::cout << this->getName() << " cannot sign because his note is too low." << std::endl;

    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("The note is too hight!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("The note is too low!");
}