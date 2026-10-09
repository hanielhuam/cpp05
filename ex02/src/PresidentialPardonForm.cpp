/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 21:27:17 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/10/03 21:27:44 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : _target("Default"),
	AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "[PresidentialPardonForm] Default constructor was called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) :
	_target(target), AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "[PresidentialPardonForm] Parameterized constructor was called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) :
	_target(other._target), AForm(other)
{
	std::cout << "[PresidentialPardonForm] copy constructor was called!" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "[PresidentialPardonForm] Destructor was called!" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator = (const PresidentialPardonForm &other)
{
	std::cout << "[PresidentialPardonForm] sign operator was called!" << std::endl;
	if (this != &other)
		AForm::operator = (other);
	return (*this);
}

void	PresidentialPardonForm::action(void) const
{
	td::cout << this->_target << " has been pardoned by Zaphod Beeblebrox."
		<< std::endl;
}
