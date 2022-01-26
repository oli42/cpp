#include "Brain.hpp"

Brain::Brain ()
{
    std::cout << " Brain Default constructor called " << std::endl;
    for(int i = 0; i < 100; i++)
        this->ideas[i] = "thoughts";
}

Brain::Brain(const Brain & one)
{
    this->operator=(one);    
    std::cout << "Brain Copy constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << " Brain destructor called" << std::endl;
}


Brain & Brain::operator=(const Brain & one)
{
    std::cout << "Assignation operator called" << std::endl;
    for (int i = 0; i < 100; i++)
		this->ideas[i] = one.ideas[i];
    return (*this);
}

