/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 11:24:56 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/23 11:24:58 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string const & name);
		ScavTrap(const ScavTrap & one);
        ~ScavTrap();
        
		ScavTrap & operator=(const ScavTrap & one);


        void attack(const std::string & target);
        void guardGate();

    
};
std::ostream & operator<<(std::ostream & os, const ClapTrap & one);

#endif