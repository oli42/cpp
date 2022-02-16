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

void Span::addNumber(unsigned int number)
{
    if (_tab.size() == this->_N)
        throw FullException();
    _tab.push_back(number);
}

unsigned int Span::shortestSpan()
{
	
		long  shortest = 4294967295;
		// std::cout << "size : " << _tab.size() << std::endl;
		if (_tab.size() <= 1)
		{
			throw notEnoughException();
		}
		else
		{
		// long  shortest = 4294967295;
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
		return ((unsigned int)shortest);
}
	

