/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:30:30 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/06 11:40:18 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main (int argc, char **argv)
{
    if (argc == 2)
    {
        try
        {
            Conversion one(static_cast<const std::string>(argv[1]));
            one.convert_literale(static_cast<const std::string>(argv[1]));
        }
        catch (const std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }  
    }
    else if (argc == 1 ?  std::cout << "No argument" << std::endl : std::cout << "Too many arguments" << std::endl)
  return 0;
}