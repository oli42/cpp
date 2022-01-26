/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:36:27 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/25 20:36:31 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal(); 
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl; 

    std::cout << j->getType() << " " << std::endl; 
    std::cout << i->getType() << " " << std::endl;
    std::cout << std::endl; 

    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout << std::endl; 

    //----------------------------------------------

    const WrongAnimal* k = new WrongCat();
    k->makeSound();

    std::cout << std::endl; 

    delete meta;
    delete i;
    delete j;
    delete k;


    return (0);
}