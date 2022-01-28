/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:06:33 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/28 21:06:34 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria
{

    public:
        Ice();
        Ice(std::string const & type);
        Ice(const Ice & one);
        ~Ice();

        Ice & operator=(const Ice & one);
        AMateria* clone() const;
        void use(ICharacter & target);
};

#endif