#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() 
: _target ("whateverform")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) 
: _target (target + "_shrubbery"), _exec_grade (137), _sign_grade (147)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & one)
{
    this->operator=(one);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

//------------------------------------------------------------------------------

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & one)
{
    this->_target = one.getTarget();
    // this->_exec_grade = one.getExecGrade();
    // this->_sign_grade = one.getSignGrade();
    // this->_status = one.getStatus();
    return (*this);
}

std::string  ShrubberyCreationForm::getTarget() const
{
    return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    (void)executor;
    std::cout << "OK" << std::endl;
}
