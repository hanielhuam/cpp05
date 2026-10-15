/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 19:42:30 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/10/14 19:42:45 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) 
{
	std::cout << "[Intern] default contructor was called!" << std::endl;
}

Intern::Intern(Intern &other) 
{
	std::cout << "[Intern] copy constructor was called!" << std::endl;
	(void)other;
}

Intern::~Intern(void) 
{
	std::cout << "[Intern] default destructor was called!" << std::endl;
}

Intern	&Intern::operator = (Intern &other) 
{
	std::cout << "[Intern] sign operator was called!" << std::endl;
	(void)other;
	return (*this);
}

AForm	*Intern::makeForm(const std::string formName, const std::string target)
{
	std::string formNames[3] = {
		"robotomy request",	"presidential pardon", "shrubbery creation"
	};
	AForm *(Intern::*functions[3])(const std::string) = {
		&Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm,
	    &Intern::makeShrubberyCreationForm
	};

	for (int i = 0; i < 3; i++)
	{
		if (formName == formNames[i])
		{
			std::cout << "Intern make " << formName << std::endl; 
			return ((this->*functions[i])(target));
		}
	}
	throw FormDoesNotExistException();
	return (NULL);
}

AForm	*Intern::makeRobotomyRequestForm(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::makePresidentialPardonForm(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeShrubberyCreationForm(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

const char	*Intern::FormDoesNotExistException::what(void) const throw()
{
	return ("[Intern] Form name does not exist");
}