/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:35:22 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/27 09:01:11 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string _type;

	public:

		Animal();
		Animal(std::string const & name);
		Animal(const Animal & one);
		virtual ~Animal();

		virtual void makeSound() const;
		Animal & operator= (const Animal & one);
		std::string		getType(void) const ;

		void    setType(std::string name);

};


#endif