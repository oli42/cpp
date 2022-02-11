#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream>
#include <exception>

template<typename T>
class Array 
{
    private:
        T * _tab;
        unsigned int _n;

    public:
        Array() : _tab(NULL), _n(0) {}

        Array(unsigned int n) : _tab(new T[n]()), _n (n) {}

        Array(Array const & one)
        {
            *this = one;
        }

        ~Array() 
        {
            if (this->_tab != NULL)
            {
                delete [] this->_tab;
            }
        }


        Array &	operator=(Array const & one) {

			if (this != & one) 
            {
				this->_n = one._n;
				this->_tab = new T[_n];
				for (unsigned int i = 0; i < _n; i++)
					this->_tab[i] = one._tab[i];
			}
			return *this;
		}

        T &	operator[](unsigned int i)
        {
			if (i < 0 || i >= _n)
				throw Array::noIndexException();
			
			return this->_tab[i];
		}

        unsigned int size() const
        {
            return (this->_n);
        }

        class noIndexException : public std::exception
        {
            virtual const char * what() const throw()
            {
                return ("You chose the wrong index man!");
            }
        };

};
#endif