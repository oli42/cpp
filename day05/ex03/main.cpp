/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:20:14 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/02 22:12:51 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
        try
        {
        // Form * test = new ShrubberyCreationForm("test");
        // std::cout << *test << std::endl;
        // Bureaucrat two("Albert", 10);
        // std::cout << two << std::endl;

        // two.signForm(*test);
        // std::cout << *test << std::endl;
        // test->execute(two);
        // two.executeForm(*test);

        // delete test;

//------------------------------------------------------------------------------
       
        // Form *test2 = new RobotomyRequestForm("test2");
        // std::cout << *test2 << std::endl;
        // Bureaucrat two("Albert", 10);
        // two.signForm(*test2);
        // test2->execute(two);

        // delete test2;
        
//-----------------------------------------------------------
        // Form *test3 = new PresidentialPardonForm("test3");
        // std::cout << *test3 << std::endl;
        // Bureaucrat two("Albert", 1);
        // two.signForm(*test3);
        // test3->execute(two);

        // delete test3;

//-----------------------------------------------------------
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("robotomy equest", "Bender");
        Bureaucrat two("Albert", 1);
        two.signForm(*rrf);
        rrf->execute(two);
        delete rrf;
        }
        catch (const std::exception & e)
        {
                std::cout << e.what() << std::endl;
        }


        


}