/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 20:46:13 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/09/28 20:47:38 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150) 
{
	std::cout << "[Bureaucrat] Default constructor was called!" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, const unsigned int &grade) : _name(name)
{
	std::cout << "[Bureaucrat] Parameterized constructor was called!" << std::endl;
	if (grade > MIN_GRADE)
		throw GradeToolowException();
	else if (grade < MAX_GRADE)
		throw GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other.getName()),
	_grade(other.getGrade())
{
	std::cout << "[Bureaucrat] Copy constructor was called!" << std::endl;
}

Bureaucrat::~Bureaucrat(void) 
{
	std::cout << "[Bureaucrat] destructor was called!" << std::endl;
}

Bureaucrat	&Bureaucrat::operator = (const Bureaucrat &other)
{
	std::cout << "[Bureaucrat] sign operator was called!" << std::endl;
	if (this != &other)
		this->_grade = other.getGrade();
	return (*this);
}

std::string	Bureaucrat::getName(void) const {return (this->_name);}

unsigned int	Bureaucrat::getGrade(void) const {return (this->_grade);}

void	Bureaucrat::increment(void)
{
	if (this->_grade - 1 < MAX_GRADE)
		throw GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrement(void)
{
	if (this->_grade + 1 > MIN_GRADE)
		throw GradeToolowException();
	this->_grade++;
}

void	Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception &e)
	{
		std::cout << this->_name << " can't signed " << form.getName() << 
		" because " << e.what() << std::endl;
		return ;
	}
	std::cout << this->_name << " signed " << form.getName() << std::endl;
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("[Bureaucrat] Grade too high");
}

const char	*Bureaucrat::GradeToolowException::what(void) const throw()
{
	return ("[Bureaucrat] Grade too low");
}

std::ostream &operator << (std::ostream &os, const Bureaucrat &other)
{
	os << other.getName() << ", Bureaucrat grade " << other.getGrade();
	return (os);
}