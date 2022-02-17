/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:00:30 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/17 17:41:33 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>

int main()
{
    try{
        Span sp = Span(10000);
        srand(time(0));
        for (int i = 0; i < 10000; i++)
        {
            sp.addNumber(rand());
        }
        // sp.addNumber(1);
        // sp.addNumber(3);
        // sp.addNumber(7);
        sp.shortestSpan();
        std::cout << "shortest diff: " << sp.shortestSpan() << std::endl;
        sp.longestSpan();
        std::cout << "longest diff: " << sp.longestSpan() << std::endl;

    }
    catch(const std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

return (0);

}
