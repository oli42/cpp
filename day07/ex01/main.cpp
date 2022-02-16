/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 09:03:14 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/12 09:03:15 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int ray[] = {1,2,3,4};
    iter(ray, 4, sayIt);

    std::string  strings[] = {"une", "deux", "trois", "quatre"};
    iter(strings, 4, sayIt);

    float fray[] = {1.23,2.34,3.45,4.56};
    iter(fray, 4, sayIt);

}