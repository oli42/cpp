#ifndef ITER_HPP
# define ITER_HPP

#include <string>
#include <iostream>

template<typename T>
void iter(T *array, size_t len, void (*f)(T const & one))
{
    for (size_t i = 0; i < len ; i++)
		(*f)(array[i]);
}

template<typename T>
void sayIt(T const & i)
{
    std::cout << i << " fois Hello!" << std::endl;
}

#endif