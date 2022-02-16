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

        void addNumber(unsigned int number);
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
