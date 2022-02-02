/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:20:56 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/02 21:20:57 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"
class Bureaucrat;

class ShrubberyCreationForm : public Form
{
    private:
        std::string _target;


    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string name);
        ShrubberyCreationForm(const ShrubberyCreationForm & one);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm & operator=(const ShrubberyCreationForm & one);
        void execute(Bureaucrat const & executor) const;

};


#endif