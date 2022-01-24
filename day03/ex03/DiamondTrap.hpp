/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:56:02 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/24 16:42:18 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap :  public ScavTrap, public FragTrap
{
    private:
        std::string _name;
    
    public:
        DiamondTrap();
        DiamondTrap(std::string const & name);
		DiamondTrap(const DiamondTrap & one);
        ~DiamondTrap();
        
		DiamondTrap & operator=(const DiamondTrap & one);

        void attack(const std::string & target);
        void whoAmI() const;

        std::string getName(void) const;
};

#endif