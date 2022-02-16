#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>


class NotFoundException: public std::exception 
{
	virtual const char * what() const throw() 
    {
		return ("Not found");
	}
};

template<typename T>
typename T::const_iterator	easyfind(T const & container, int index) 
{

	if (std::find(container.begin(), container.end(), index) == container.end())
		throw NotFoundException();
	return (std::find(container.begin(), container.end(), index));

}
#endif