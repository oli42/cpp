/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 11:25:35 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/23 11:25:36 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap
{
	private:

		std::string _name;
		unsigned int _hit_points;
		unsigned int _energie_points;
		unsigned int _attack_damage;

	public:

		ClapTrap();
		ClapTrap(std::string const & name);
		ClapTrap(const ClapTrap & one);
        ~ClapTrap();

		ClapTrap & operator= (const ClapTrap & one);

		void    attack( std::string const & target);
		void	takeDamage( unsigned int amount);
		void	beRepaired( unsigned int amount);

		std::string		getName(void) const ;
		unsigned int	getEnergiePoints(void) const ;
		unsigned int	getAttackDamage(void) const ;
		unsigned int	getHitPoints(void) const ;

		void    setName( std::string name);
		void	setEnergiePoints( unsigned int point);
		void	setAttackDamage( unsigned int point);
		void	setHitPoints( unsigned int point);

};

std::ostream & operator<<(std::ostream & os, const ClapTrap & one);

#endif