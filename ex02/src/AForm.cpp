/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 22:57:51 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/10/01 22:58:10 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("Default"), _signed(false), _signGrade(150),
	_executionGrade(150)
{
	std::cout << "[AForm] Default constructor was called!" << std::endl;
}

AForm::AForm(const std::string &name, const unsigned int &signGrade,
	const unsigned int &executionGrade) : _name(name), _signed(false),
	_signGrade(signGrade), _executionGrade(executionGrade)
{
	std::cout << "[AForm] Parameterized Constructor was called!" << std::endl;
	if (signGrade < MAX_GRADE || executionGrade < MAX_GRADE)
		throw GradeTooHighException();
	else if (signGrade > MIN_GRADE || executionGrade > MIN_GRADE)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &other) : _name(other.getName()), _signed(other.getSigned()),
	_signGrade(other.getSignGrade()), _executionGrade(other.getExecutionGrade())
{
	std::cout << "[AForm] Copy constructor was called!" << std::endl;
}

AForm::~AForm(void)
{
	std::cout << "[AForm] Destructor was called!" << std::endl;
}

AForm	&AForm::operator = (const AForm &other)
{
	std::cout << "[AForm] Sign operator was called!" << std::endl;
	if (this != &other)
		this->_signed = other.getSigned();
	return (*this);
}

std::string	AForm::getName(void) const {return (this->_name);}

bool	AForm::getSigned(void) const {return (this->_signed);}

bool	AForm::setSigned(bool formSigned) {this->_signed = formaSigned;}

unsigned int	AForm::getSignGrade(void) const {return (this->_signGrade);}

unsigned int	AForm::getExecutionGrade(void) const {return (this->_executionGrade);}

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() >= this->_signGrade)
		throw GradeTooLowException();
	this->_signed = true;
}

void	AForm::execute(cont Bureaucrat &bureaucrat)
{
	if (!this->_signed)
		
}

const char	*AForm::GradeTooLowException::what(void) const throw()
{
	return ("[AForm] grade too low");
}

const char	*AForm::GradeTooHighException::what(void) const throw()
{
	return ("[AForm] grade too high");
}

std::ostream	&operator << (std::ostream &os, const AForm &other)
{
	os << "AForm: " << other.getName() << " whith signed status equal "
	<< other.getSigned() << std::endl << " sign grade = " << other.getSignGrade()
	<< std::endl << " and execution grade = " << other.getExecutionGrade() << std::endl;
	return (os);
}