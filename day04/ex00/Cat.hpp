/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:35:53 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/25 20:35:57 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
	protected:

		std::string _type;

	public:

		Cat();
		Cat(std::string const & type);
		Cat(const Cat & one);
		virtual ~Cat();

		virtual void makeSound() const;
		Cat & operator= (const Cat & one);

		std::string		getType(void) const ;

		void    setType(std::string type);

};


#endif