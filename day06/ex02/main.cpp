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
        dynamic_cast<A&>(p);
		std::cout << "A &" << std::endl;
    }
    catch (std::exception & e)
    {
    }
	try 
    {
        dynamic_cast<B&>(p);
		std::cout << "B &" << std::endl;
    }
    catch (std::exception & e)
    {
    }
    try
    {
        dynamic_cast<C&>(p);
		std::cout << "C &" << std::endl;
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

    exit(88);

    return (0);
}
     