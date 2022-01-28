/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:06:20 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/28 21:06:21 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{

    public:
        Cure();
        Cure(std::string const & type);
        Cure(const Cure & one);
        ~Cure();

        Cure & operator=(const Cure & one);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif