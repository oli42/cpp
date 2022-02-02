#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <time.h>
#include <stdlib.h>


class Bureaucrat;

class RobotomyRequestForm : public Form
{
    private:
        std::string _target;


    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string name);
        RobotomyRequestForm(const RobotomyRequestForm & one);
        ~RobotomyRequestForm();

        RobotomyRequestForm & operator=(const RobotomyRequestForm & one);
        void execute(Bureaucrat const & executor) const;

};


#endif