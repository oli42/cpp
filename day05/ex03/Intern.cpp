/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:20:03 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/02 21:20:04 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const & one)
{
    this->operator=(one);
}

Intern::~Intern()
{
}

Intern  & Intern::operator=(const Intern & one)
{
    (void)one;
    return (*this);
}

Form * Intern::makeForm(std::string const & concretForm, std::string const & target)
{
        std::string concretForms[3] = { "shrubbery creation", "robotomy request", "presidential pardon"};

        for (int i = 0; i < 3; i++)
        {

            if (!concretForms[i].compare(concretForm))
            {
                std::cout << "Intern creates " << target << std::endl;

                switch (i)
                {
                    case 0: return (new ShrubberyCreationForm(target));
                    case 1: return (new RobotomyRequestForm(target));
                    case 2: return (new PresidentialPardonForm(target));
                }
            }
        }
        throw Intern::InternException();
    return (0);
}

const char * Intern::InternException::what() const throw()
{
    return ("This kind of form doesn't exist!");
}
