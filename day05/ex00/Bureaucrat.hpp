/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:32:23 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/02 21:41:21 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <exception>
#include <string>
#include <iostream>

class Bureaucrat 
{

    private:
        const std::string _name;
        int _note;

    public:
        Bureaucrat();
        Bureaucrat(const std::string & name, int note);
        Bureaucrat(Bureaucrat const & one);
        ~Bureaucrat();

        void increment();
        void decrement();
        Bureaucrat & operator=(const Bureaucrat & one);
        const std::string getName() const;
        int getNote() const;
        void setNote(int note);

        class GradeTooHighException : public std::exception
        {
          public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

};
std::ostream & operator<<( std::ostream & os, const Bureaucrat & one);
#endif
