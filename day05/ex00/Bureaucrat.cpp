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
    // std::cout << this->getNote();
}

void Bureaucrat::decrement()
{
    this->setNote(_note += 1);
    // std::cout << this->getNote();
    
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
    os << one.getName() << " bureaucrat grade  " << one.getNote();
    return (os);
}


