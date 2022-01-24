/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 11:25:47 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/24 16:30:00 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("oli");
    std::cout << "a is " << a.getName() << std::endl;
    std::cout << "a has " << a.getHitPoints() << " hit points" << std::endl;
    a.takeDamage(5);
    std::cout << "a has " << a.getHitPoints() << " hit points" << std::endl;
    std::cout << "a has " << a.getEnergiePoints() << " energie points" << std::endl;
    a.beRepaired(3);
    std::cout << "a has " << a.getHitPoints() << " hit points" << std::endl;

    std::cout << "a has " << a.getEnergiePoints() << " energie points" << std::endl;
    std::cout << std::endl;
    a.attack("sky");
    std::cout << "a has " << a.getEnergiePoints() << " energie points" << std::endl;

    return (0);
}