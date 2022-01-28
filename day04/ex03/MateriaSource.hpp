/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:07:59 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/28 21:08:00 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *  _inventory[4];

    public:
        MateriaSource();
        MateriaSource(const MateriaSource & one);
        ~MateriaSource();

        MateriaSource & operator=(const MateriaSource & one);
        void learnMateria(AMateria *m);
        AMateria* createMateria(std::string const & type);

};

#endif
