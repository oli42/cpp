/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:06:04 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/28 21:06:05 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria *  _inventory[4];


    public:
        Character();
        Character(std::string const & name);
        Character(const Character & one);
        ~Character();

        Character & operator=(const Character & one);
        std::string const & getName() const;

        void equip(AMateria * m);
        void unequip(int idx);
        void use(int idx, ICharacter & target);

};

#endif