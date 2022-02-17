/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:00:47 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/17 10:00:48 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
#include <vector>
#include <iterator>
#include <algorithm>
#include <iostream>
#include <exception>

class Span 
{
    private:
        unsigned int _N;
        std::vector<int> _tab;
    
    public:
        Span();
        Span(unsigned int N);
        Span(Span const & one);
        ~Span();

        Span & operator=(Span const & one);

        void addNumber(int number);
        unsigned int shortestSpan();
        unsigned int longestSpan();

        class FullException: public std::exception 
        {
			virtual const char * what() const throw() 
            {
				return ("The tab is full.");
			}
		};

        class notEnoughException: public std::exception 
        {
			virtual const char * what() const throw() 
            {
				return ("The tab's size is too low .");
			}
		};


};
#endif
