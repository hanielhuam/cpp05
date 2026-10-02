/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 22:57:51 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/10/01 22:58:10 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Default"), _signed(false), _signGrade(150),
	executionGrade(150)
{
	std::cout << "[Form] Default constructor was called!" << std::endl;
}

Form::Form(const std::string &name, const unsigned int &signGrade,
	const unsigned int &executionGrade) : _name(name), _signed(false)
{
	std::cout << "[Form] Parameterized Constructor was called!" << std::endl;
	if (signGrade < M)
}

Form::Form(const Form &other) : _name(other.getName), _signed(other.getSigned(),
	_signGrade(other.getSignGrade()), _executionGrade(other.getExecutionGrade())
{
	std::cout << "[Form] Copy constructor was called!" << std::endl;
}

Form::~Form(void) {}

Form	&Form::operator = (const Form &other)
{
	if (this != &other)
		this->_signed = other.getsigned();
	return (*this);
}

std::string	Form::getName(void) const {return (this->_name);}

int	Form::getSigned(void) const {return (this->_signed);}

unsigned int	Form::getSignGrade(void) const {return (this->_signGrade);}

unsigned int	Form::getExecutionGrade(void) const {return (this->_executionGrade);}

void	Form::beSigned(const Bureaucrat &bureaucat)
{

}

const char	*Form::GradeToolowException::what(void)
{
	return ("[Form] grade too low");
}

const char	*Form::GradeTooHighException::what(void)
{
	return ("[Form] grade too high");
}

std::ostream	&Form::operator << (const std::ostream &os, const Form &other)
{
	os << "Form: " << other.getName() << " whith signed status equal "
	<< other.getSigned() << std::endl << " sign grade = " << other.getSignGrade()
	<< std::endl << " and execution grade = " << other.getExecutionGrade() << std::endl;
	return (os);
}