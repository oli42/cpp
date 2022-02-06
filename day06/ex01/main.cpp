/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:15:35 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/06 11:15:36 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct	Data
{
	int test;
    std::string whatever;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) 
{
	return (reinterpret_cast<Data*>(raw));
}

int main ()
{
    Data one;
    one.test = 20;
    one.whatever = "hello";
    Data* ptr;
    

    uintptr_t i = serialize(&one);
    ptr =  deserialize(i);

    std::cout << one.test << std::endl;
    std::cout << ptr->test << std::endl;

    std::cout << &one.test << std::endl;
    std::cout << &ptr->test << std::endl;


    std::cout << "------------------------------" << std::endl;

    std::cout << one.whatever << std::endl;
    std::cout << ptr->whatever << std::endl;

    std::cout << &one.whatever << std::endl;
    std::cout << &ptr->whatever << std::endl;


    return (0);

}