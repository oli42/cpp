/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:00:41 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/21 15:29:16 by ochichep         ###   ########.fr       */
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
			unsigned int diff = this->_tab[0];
			std::sort(this->_tab.begin(), this->_tab.end());

			std::vector<int>::const_iterator it;
			std::vector<int>::const_iterator itend = this->_tab.end();
			for (it = this->_tab.begin(); it != itend; it++)
			{
				if (*it < 0 && *(it + 1) > 0)
					diff = abs(*(it)) + abs(*(it + 1));
				else
					diff = abs(*(it + 1)) - abs(*(it));

				if (diff < shortest)
					shortest = diff;
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

		std::vector<int>::const_iterator it = this->_tab.begin();
		std::vector<int>::const_iterator itend = this->_tab.end();
		if (*it < 0 && *(itend) > 0)
			diff = abs(*(it)) + abs(*(--itend));
		else
			diff = abs(*(--itend)) - abs(*(it));
		longest = diff;
	}
	return ((unsigned int)longest);
}

void	Span::addRange(int first, int last)
{
	int range = last - first;
	for (int i = 0; i <= range; i++)
	{
		if (_tab.size() == this->_N)
        throw FullException();
		this->_tab.insert(this->_tab.begin(), 1, first + i);
	}

	// std::vector<int>::iterator it = this->_tab.begin();
	// std::vector<int>::iterator ite = this->_tab.end();

	// while (it != ite)
	// {
	// 	std::cout << *it << std::endl;
	// 	++it;
	// }
}

	

