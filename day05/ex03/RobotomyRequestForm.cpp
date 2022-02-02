#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <time.h>
#include <stdlib.h>


RobotomyRequestForm::RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string const name) : Form (name, 45, 72), _target (name)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & one) : Form(one)
{
    this->operator=(one);
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

//------------------------------------------------------------------------------

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & one)
{
    this->_target = one.getName();
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if (!this->getStatus())
            throw StatusException();
        if (executor.getNote() > this->getExecGrade())
            throw SignException();
        srand(time(NULL));
        if (rand() % 2 == 0)
            std::cout << this->_target << " has been robotomized!" << std::endl;
        else
            std::cout << "Robotomization has failed!" << std::endl;
    }
    catch (std::exception & e)
    {
		std::cout << executor.getName() << " cannot executes " << this->getName() << " because " << e.what() << std::endl;
    }

}