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

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "[Bureaucrat] Parameterized constructor was called!" << std::endl;
	if (grade > MIN_GRADE)
		throw GradeToolowException();
	else if (grade < MAX_GRADE)
		throw GradeTooHighException();
	this->_name = name;
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

Bureaucrat::Bureaucrat	&operator = (const Bureaucrat &other)
{
	std::cout << "[Bureaucrat] sign operator was called!" << std::endl;
	if (this != &other)
	{
		this->_name = other.getName();
		this->_grade = other.getGrade();
	}
	return (*this);
}

std::string	Bureaucrat::getNmae(void) const {return (this->_name);}

int	Bureaucrat::getGrade(void) const {return (this->_grade);}