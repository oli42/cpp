/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:20:50 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/02 21:20:51 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const name) : Form (name, 137, 145), _target (name)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & one) : Form(one)
{
    this->operator=(one);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

//------------------------------------------------------------------------------

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & one)
{
    this->_target = one.getName();
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if (!this->getStatus())
            throw StatusException();
        if (executor.getNote() > this->getExecGrade())
            throw SignException();
        std::cout << executor.getName() << " executes " << this->_target << std::endl;
        std::ofstream ofs((this->_target + "__shrubbery").c_str());
        if (!ofs)
        {
            ofs.close();
            std::cout << this->_target << "__shrubbery operation failed!" << std::endl;
        }
        else
        {
            ofs << "      ^^     " << std::endl;
            ofs << "     ^^^^    " << std::endl;
            ofs << "    ^^^^^^   " << std::endl;
            ofs << "   ^^^^^^^^  " << std::endl;
            ofs << "  ^^^^^^^^^^ " << std::endl;
            ofs << " ^^^^^^^^^^^^ " << std::endl;
            ofs << "^^^^^^^^^^^^^^" << std::endl;
            ofs << " ^^^^^^^^^^^^ " << std::endl;
            ofs << "  ^^^^^^^^^^ " << std::endl;
            ofs << "      ^^   " << std::endl;
            ofs << "      ^^    " << std::endl;
            ofs << "     ^^^^    " << std::endl;
            ofs.close();

        }
        
    }
    catch (const std::exception & e)
    {
		std::cout << executor.getName() << " cannot executes " << this->getName() << " because " << e.what() << std::endl;
    }
};


//------------------------------------------------------------------------------
