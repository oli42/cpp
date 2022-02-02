/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:19:50 by ochichep          #+#    #+#             */
/*   Updated: 2022/02/02 21:19:51 by ochichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() 
{
}

Form::Form(const std::string name, const int execGrade, const int signGrade) 
: _name (name), _exec_grade (execGrade), _sign_grade (signGrade), _status (false)
{
    if (this->_exec_grade < 1 || this->_sign_grade < 1)
        throw GradeTooHighException();
    else if (this->_exec_grade > 150 || this->_exec_grade > 150)
        throw GradeTooLowException();
}

Form::Form(const Form & one)
{
    this->operator=(one);
}

Form::~Form()
{
}

//------------------------------------------------------------------------------

Form & Form::operator=(const Form & one)
{
    this->_name = one.getName();
    this->_exec_grade = one.getExecGrade();
    this->_sign_grade = one.getSignGrade();
    this->_status = one.getStatus();
    return (*this);
}

void Form::beSigned(const Bureaucrat & one)
{
    if (one.getNote() < this->_sign_grade)
        this->_status = true;
    else    
        throw SignException();
}


void Form::execute(Bureaucrat const & executor) const
{(void)executor;};


const char* Form::SignException::what() const throw()
{
    return ("The form can't be signed. The Bureaucrat's note is too low!"); 
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("The note is too hight!");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("The note is too low!");
}

const char* Form::StatusException::what() const throw()
{
    return ("The form is not signed!");
}
//------------------------------------------------------------------------------

std::string  Form::getName() const
{
    return (this->_name);
}

int Form::getExecGrade()const
{
    return (this->_exec_grade);
}

int Form::getSignGrade() const
{
    return (this->_sign_grade);
}

bool Form::getStatus() const
{
    return (this->_status);
}


std::ostream & operator<<(std::ostream & os, const Form & one)
{
    os << "Form "<<  one.getName() << ", execGrade: " << one.getExecGrade() << ", signGrade: " << one.getSignGrade() << ", status: " << one.getStatus();
    return (os);
}
