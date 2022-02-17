/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:44:51 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/17 19:44:52 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
    std::cout << "   *** MUTANT ***" << std::endl;

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::container_type::iterator it = mstack.begin();
    MutantStack<int>::container_type::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

//------------------------------------------------------------------------------

    std::cout << "----------------------------------------------" << std::endl;

//------------------------------------------------------------------------------
    std::cout << "   *** LIST ***" << std::endl;
   
    std::list<int> lstack;
    lstack.push_back(5);
    lstack.push_back(17);
    std::cout << lstack.back() << std::endl; // equivalent de stack top, get the last element in the list container
    lstack.pop_back(); // equivalent de stack pop, removes the last element from the list
    std::cout << lstack.size() << std::endl;
    lstack.push_back(3);
    lstack.push_back(5);
    lstack.push_back(737);
    //[...]
    lstack.push_back(0);
    std::list<int>::iterator itt = lstack.begin();
    std::list<int>::iterator itte = lstack.end();
    ++itt;
    --itt;
    while (itt != itte)
    {
        std::cout << *itt << std::endl;
        ++itt;
    }
    std::list<int> ss(lstack);

    return(0);
}