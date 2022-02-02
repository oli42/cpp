/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:27:13 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/02 21:27:14 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"


class Bureaucrat;

class PresidentialPardonForm : public Form
{
    private:
        std::string _target;


    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string name);
        PresidentialPardonForm(const PresidentialPardonForm & one);
        ~PresidentialPardonForm();

        PresidentialPardonForm & operator=(const PresidentialPardonForm & one);
        void execute(Bureaucrat const & executor) const;

};


#endif