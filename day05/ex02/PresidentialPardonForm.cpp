#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"


PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const name) : Form (name, 5, 25), _target (name)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & one) : Form(one)
{
    this->operator=(one);
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

//------------------------------------------------------------------------------

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & one)
{
    this->_target = one.getName();
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if (!this->getStatus())
            throw StatusException();
        if (executor.getNote() > this->getExecGrade())
            throw SignException();
        std::cout << this->_target << " has been forgiven by Zafod Beeblebrox!" << std::endl;
    }
    catch (std::exception & e)
    {
		std::cout << executor.getName() << " cannot executes " << this->getName() << " because " << e.what() << std::endl;
    }
   
}