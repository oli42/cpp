/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:26:59 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/02 22:20:03 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
        
//------------------------------------------------------------------------------

        // Form *test3 = new PresidentialPardonForm("whatever");
        // std::cout << *test3 << std::endl;
        // Bureaucrat two("Albert", 1);
        // two.signForm(*test3);
        // std::cout << *test3 << std::endl;
        // test3->execute(two);

        // delete test3;
        }
        catch (const std::exception & e)
        {
                std::cout << e.what() << std::endl;
        }
        
}