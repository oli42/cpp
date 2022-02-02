#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm 
{
    private:
        std::string _target;
        int _exec_grade;
        int _sign_grade;

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm & one);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm & operator=(const ShrubberyCreationForm & one);
        std::string getTarget() const;
        void execute (Bureaucrat const & executor) const;


};
       
#endif