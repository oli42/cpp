/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:00:41 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/17 17:39:59 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _N(0) {};
Span::Span(unsigned int N): _N(N) {};
Span::Span(Span const & one)
{
    *this = one;
}

Span & Span::operator=(Span const & one)
{
    if (this != & one)
    {
        this->_N = one._N;
        this->_tab = one._tab;
    }
    return (*this);
}

Span::~Span(){};

void Span::addNumber(int number)
{
    if (_tab.size() == this->_N)
        throw FullException();
    _tab.push_back(number);
}

unsigned int Span::shortestSpan()
{
	
		unsigned int  shortest = 4294967294;
		if (_tab.size() <= 1)
		{
			throw notEnoughException();
		}
		else
		{
			unsigned int diff = _tab[0];
			std::sort(this->_tab.begin(), this->_tab.end());

			std::vector<int>::const_iterator it;
			std::vector<int>::const_iterator itend = _tab.end();
			for (it = _tab.begin(); it != itend; it++)
			{
				if (*it < 0 && *(it + 1) > 0)
					diff = abs(*(it)) + abs(*(it + 1));
				else
					diff = abs(*(it)) - abs(*(it + 1));

				if (abs(diff) < shortest)
					shortest = abs(diff);
			}
		}
		return (shortest);
}

unsigned int Span::longestSpan()
{
	long  longest = 4294967295;
	if (_tab.size() <= 1)
	{
		throw notEnoughException();
	}
	else
	{
		unsigned int diff = _tab[0];
		std::sort(this->_tab.begin(), this->_tab.end());

		std::vector<int>::const_iterator it = _tab.begin();
		std::vector<int>::const_iterator itend = _tab.end();
		if (*it < 0 && *(itend) > 0)
			diff = abs(*(it)) + abs(*(--itend));
		else
			diff = *(--itend) - (*(it));
		longest = abs(diff);
	}
	return ((unsigned int)longest);
}

	

