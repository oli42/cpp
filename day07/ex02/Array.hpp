/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 09:03:31 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/13 12:30:46 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream>
#include <exception>

template<typename T>
class Array 
{
    private:
        unsigned int _n;
        T * _tab;

    public:
        Array() : _n(0), _tab(NULL) {}

        Array(unsigned int n) : _n (n), _tab(new T[n]()) {}

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

        const  T &	operator[](unsigned int i) const
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