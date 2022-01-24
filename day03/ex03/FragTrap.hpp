/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:47:47 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/24 16:36:58 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string const & name);
		FragTrap(const FragTrap & one);
        ~FragTrap();
        
		FragTrap & operator=(const FragTrap & one);

        void highFivesGuys(void);
    
};

#endif