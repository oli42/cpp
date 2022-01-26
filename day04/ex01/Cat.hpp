/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:35:53 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/26 21:11:17 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	protected:
		std::string _type;
		
	private:
		Brain* _own_brain;

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