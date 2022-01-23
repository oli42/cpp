/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 11:25:15 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/23 11:25:16 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ClapTrap a("oli");
    ClapTrap b("Tad");

    std::cout << "a is " << a.getName() << std::endl;
    std::cout << "a has " << a.getHitPoints() << " hit points" << std::endl;
    a.takeDamage(5);
    std::cout << "a has " << a.getHitPoints() << " hit points" << std::endl;
    std::cout << "a has " << a.getEnergiePoints() << " energie points" << std::endl;
    a.beRepaired(3);
    std::cout << "a has " << a.getHitPoints() << " hit points" << std::endl;

    std::cout << "a has " << a.getEnergiePoints() << " energie points" << std::endl;
    a.attack("Tad");
    std::cout << "a has " << a.getEnergiePoints() << " energie points" << std::endl;

    std::cout  << std::endl;

    ScavTrap one;
    ScavTrap two(one);
    ScavTrap three("GOD_OF_CLASS");
    std::cout  << std::endl;


    std::cout << "one is " << one.getName() << std::endl;
    std::cout << "one has " << one.getHitPoints() << " hit points" << std::endl;

    std::cout << "two is " << two.getName() << std::endl;
    std::cout << "two has " << two.getHitPoints() << " hit points" << std::endl;

    std::cout << "three is " << three.getName()  << std::endl;
    std::cout << "three has " << three.getHitPoints() << " hit points" << std::endl;
    std::cout  << std::endl;

    three.attack("sky");
    std::cout << "three has " << three.getEnergiePoints() << " energie points" << std::endl;
    std::cout  << std::endl;

    three.guardGate();
    std::cout  << std::endl;



    return (0);
}