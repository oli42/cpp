/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 09:03:09 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/12 09:03:10 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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