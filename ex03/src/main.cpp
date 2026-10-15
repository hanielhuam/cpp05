/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 20:45:07 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/09/28 20:45:58 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	AForm	*forms[3];
	Bureaucrat	haniel("Haniel", 1);
	Intern	intern;

	forms[0] = intern.makeForm("robotomy request", "Huam");
	forms[1] = intern.makeForm("presidential pardon", "Macedo");
	forms[2] = intern.makeForm("shrubbery creation", "Ferreira");
	for (int i = 0; i < 3; i++)
	{
		haniel.signForm(*forms[i]);
		(*forms[i]).execute(haniel);
	}
	try
	{
		intern.makeForm("anyone", "nobody");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	for (int i = 0; i < 3; i++)
		delete forms[i];

	return (0);
}