/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:44:36 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/17 22:49:26 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>()
        {
        }
		MutantStack(MutantStack const & one) 
        { 
            *this = one; 
        }
		~MutantStack()
        {
        }
		MutantStack & operator=(MutantStack const & one) 
        {

			if (this != & one)
				std::stack<T>::operator=(one);
			return (*this);
		}

        typename std::stack<T>::container_type::iterator begin()
        { 
            return this->c.begin();
        }
        typename std::stack<T>::container_type::iterator end()
        { 
            return this->c.end();
        }
        typename std::stack<T>::container_type::const_iterator begin() const
        { 
            return this->c.begin();
        }
		typename std::stack<T>::container_type::const_iterator end() const
        { 
            return this->c.end();
        }
        typename std::stack<T>::container_type::reverse_iterator rbegin()
        { 
            return this->c.rbegin();
        }
		typename std::stack<T>::container_type::reverse_iterator rend()
        { 
            return this->c.rend();
        }
         typename std::stack<T>::container_type::const_reverse_iterator rbegin() const
        { 
            return this->c.rbegin();
        }
		typename std::stack<T>::container_type::const_reverse_iterator rend() const
        { 
            return this->c.rend();
        }
};
#endif