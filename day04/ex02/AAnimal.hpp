/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:20:47 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/27 09:54:26 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
#include <iostream>
#include <string>

class AAnimal
{
	protected:
		std::string _type;

	public:
		AAnimal();
		AAnimal(std::string const & name);
		AAnimal(const AAnimal & one);
		virtual ~AAnimal();

		virtual void makeSound() const = 0;
		AAnimal & operator=(const AAnimal & one);
		std::string		getType(void) const ;

		void    setType(std::string name);

};


#endif