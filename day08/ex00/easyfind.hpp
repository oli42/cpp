/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 09:49:01 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/17 09:49:02 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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