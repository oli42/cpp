/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 09:49:09 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/17 09:49:10 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
    try
    {
        std::vector<int> v;
        // std::list<int> v;
 
        v.push_back(25);
        v.push_back(13);
        v.push_back(100);
 

        std::vector<int>::iterator it;
        std::vector<int>::iterator limit = v.end();
        // std::list<int>::iterator it;
        // std::list<int>::iterator limit = v.end();

        for (it = v.begin(); it != limit; it++) 
        {
            std::cout << *it << std::endl;
        }

        std::cout << "Found: " << *easyfind(v, 25) << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}