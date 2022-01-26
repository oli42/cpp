/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:36:58 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/25 20:37:09 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal
{
	protected:

		std::string _type;

	public:

		WrongAnimal();
		WrongAnimal(std::string const & name);
		WrongAnimal(const WrongAnimal & one);
		virtual ~WrongAnimal();

		virtual void makeSound() const;
		WrongAnimal & operator= (const WrongAnimal & one);
		std::string		getType(void) const ;

		void    setType(std::string name);

};


#endif