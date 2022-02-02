/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:19:57 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/02 21:19:58 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
#include "Bureaucrat.hpp"
class  Bureaucrat;

class Form 
{
    private:
        std::string _name;
        int _exec_grade;
        int _sign_grade;
        bool _status;

    public:
        Form();
        Form(const std::string name, const int signGrade, const int execGrade);
        Form(const Form & one);
        virtual ~Form();

        Form & operator=(const Form & one);
        void beSigned(const Bureaucrat & one);
        virtual void execute(Bureaucrat const & executor) const = 0;

        std::string  getName() const;
        int getExecGrade() const;
        int getSignGrade() const;
        bool getStatus() const;


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

        class SignException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
         
        class StatusException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

};
std::ostream & operator<<(std::ostream & os, const Form & one);

#endif