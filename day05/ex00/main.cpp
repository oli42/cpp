/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:32:29 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/02 21:45:52 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
        try
        {
                Bureaucrat one("Albert", 150);
                // one.decrement();
                // one.setNote(1);
                // one.increment();

        }
        catch (const std::exception & e)
        {
                std::cout << e.what() << std::endl;
        }
        
//-----------------------------------------------------------

        // try
        // {
        //         Bureaucrat two("Albert", 1);
        //         std::cout << two << std::endl;
        // }
        // catch (Bureaucrat::GradeTooHighException & one)
        // {
        //         std::cout << "Too hight!" << std::endl; 
        // }
        // catch (Bureaucrat::GradeTooLowException & one)
        // {
        //         std::cout << "Too low!" << std::endl; 
        // }
}