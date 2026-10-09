/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 21:26:49 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/10/03 21:27:07 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : _target("default"),
	AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "[RobotomyRequestForm] Default constructor was called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : _target(target),
	AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "[RobotomyRequestForm] parameterized constructor was called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm other) :
	_target(other._target), AForm(other)
{
	std::cout << "[RobotomyRequestForm] copy constructor was called!" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "[RobotomyRequestForm] Destructor was called!" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator = (const RobotomyRequestForm &other)
{
	std::cout << "[RobotomyRequestForm] sign operator was called!" << std::endl;
	if (this != &other)
		AForm::operator = (other);
	return (*this);
}

void	RobotomyRequestForm::action(void) const
{
	std::cout << this->_target << " started to drill" << std::endl;
	std::cout << "drrrr-drrrr-drrrr-drrrr-drrrr-drrrr" << std::endl;
	std::srand(std::time(0));
	if (rand() % 2)
		std::cout << this->_target << " has been sucessfly robotized!" << std::endl;
	else
		std::cout << this->_target << " failed to robotized!" << std::endl;
}
