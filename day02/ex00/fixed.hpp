/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 22:17:22 by ochichep          #+#    #+#             */
/*   Updated: 2022/01/19 22:17:23 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed
{
    private:
        int _fixed_point_value;
        static const int _fractionnal_part = 8;

    public:
        Fixed();
        Fixed(const Fixed & one);
        ~Fixed();
        
        Fixed & operator=(const Fixed & one);
        int getRawBits(void) const;
        void setRawBits(int const raw);


};

#endif