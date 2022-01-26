/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:36:14 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/26 21:11:22 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	protected:
		std::string _type;
		
	private:
		Brain* _own_brain;

	public:
		Dog();
		Dog(std::string const & type);
		Dog(const Dog & one);
		virtual ~Dog();

		virtual void makeSound() const;
		Dog & operator= (const Dog & one);

		std::string		getType(void) const ;

		void    setType(std::string type);

};


#endif