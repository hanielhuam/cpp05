/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 19:43:01 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/10/14 19:43:11 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;
class Intern
{
	private:
		AForm	*makeRobotomyRequestForm(std::string target);
		AForm	*makePresidentialPardonForm(const std::string target);
		AForm	*makeShrubberyCreationForm(const std::string target);
	public:
		Intern(void);
		Intern(Intern &other);
		~Intern(void);

		Intern	&operator = (Intern &other);

		AForm	*makeForm(const std::string formName, const std::string target);

		class FormDoesNotExistException : public std::exception
		{
			public:
				const char	*what(void) const throw();
		};
};