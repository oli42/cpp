/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:13:25 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/15 17:08:23 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <unistd.h>

Base*  generate(void)
{
    Base* one;
    std::srand(time(NULL));

    switch(std::rand() % 3)
    {
        case 0: one = new A();
                return (one);
        case 1: one = new B();
                return (one);
        case 2: break;
    }
    one = new C();
    return (one);
}

void identify(Base * p)
{
    try
    {
        if (dynamic_cast<A*>(p))
            std::cout << "A *" << std::endl;
        else if (dynamic_cast<B*>(p))
            std::cout << "B *" << std::endl;
        else if (dynamic_cast<C*>(p))
            std::cout << "C *" << std::endl;
    }
    catch (std::exception & e)
    {
    }
	return ;
}

void identify(Base & p)
{
    try
    {
        Base & one = dynamic_cast<A&>(p);
		std::cout << "A &" << std::endl;
        static_cast<void>(one);
    }
    catch (std::exception & e)
    {
    }
	try 
    {
        Base & two = dynamic_cast<B&>(p);
		std::cout << "B &" << std::endl;
        static_cast<void>(two);

    }
    catch (std::exception & e)
    {
    }
    try
    {
        Base & three = dynamic_cast<C&>(p);
		std::cout << "C &" << std::endl;
        static_cast<void>(three);
        
    }
    catch (std::exception & e)
    {
    }
	
	return ;
}

int main()
{
    Base* test;

    
    test = generate();
    identify(test);
    identify(*test);
    delete test;

    return (0);
}
     