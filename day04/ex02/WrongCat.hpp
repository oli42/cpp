/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:37:23 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/27 09:54:45 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	protected:

		std::string _type;

	public:

		WrongCat();
		WrongCat(std::string const & type);
		WrongCat(const WrongCat & one);
		virtual ~WrongCat();

		virtual void makeSound() const;
		WrongCat & operator=(const WrongCat & one);

		std::string		getType(void) const ;

		void    setType(std::string type);

};


#endif