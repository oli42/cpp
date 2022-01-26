/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:36:27 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/26 21:45:11 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    // const Animal* meta = new Animal(); 
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << std::endl; 
    // std::cout << j->getType() << " " << std::endl; 
    // std::cout << i->getType() << " " << std::endl;
    // std::cout << std::endl; 
    // i->makeSound();
    // j->makeSound();
    // meta->makeSound();
    // std::cout << std::endl; 

    //--------------------------------------------------------------------------

    // const WrongAnimal* k = new WrongCat();
    // k->makeSound();

    // std::cout << std::endl; 

    // delete meta;
    // delete i;
    // delete j;
    // delete k;

    //--------------Ex01--------------------------------------------------------

    Animal* tab[50];

    for(int i = 0; i < 15; i++)
        tab[i] = new Cat();
    for(int i = 15; i < 30; i++)
        tab[i] = new Dog();

    for(int i = 0; i < 30; i++)
        tab[i]->makeSound();

    for(int i = 0; i < 30; i++)
        delete tab[i];
    

    return (0);
}