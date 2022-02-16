/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 09:03:02 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/12 09:03:03 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define  WHATEVER_HPP
#include <iostream>
#include <string>


template <typename T>
void swap(T & a, T & b)
{
    T tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T const & min(T const & a, T const & b)
{
    if (a == b) return (b);
    return (a < b ? a : b);
}

template <typename T>
T const & max(T const & a, T const & b)
{
    if (a == b) return (b);
    return (a > b ? a : b);
}

#endif