/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:29:36 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/02 21:29:37 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
        try
        {
                 Bureaucrat one("Albert", 1);
                // one.decrement();
                // one.setNote(1);
                one.increment();
        }
        catch (const std::exception & e)
        {
                std::cout << e.what() << std::endl;
        }
       
        try
        {
                Bureaucrat two("Albert", 11);
                std::cout << two << std::endl;
                Form application("app", 10, 12);
                std::cout << application << std::endl;

                // application.beSigned(two);
                two.signForm(application);
                std::cout << application << std::endl;


        }
        catch (const std::exception & one)
        {
                std::cout << one.what() << std::endl;

        }
        
//-----------------------------------------------------------

}