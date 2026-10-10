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

int	main(void)
{
	PresidentialPardonForm presidentForm("President");
	ShrubberyCreationForm shrubberyForm;
	RobotomyRequestForm robotomyForm("Robotomy");
	Bureaucrat	haniel("Haniel", 1);
	Bureaucrat	huam("Huam", 150);

	haniel.signForm(presidentForm);
	haniel.signForm(shrubberyForm);
	try
	{
		presidentForm.execute(huam);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		shrubberyForm.execute(huam);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		robotomyForm.execute(haniel);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	haniel.signForm(robotomyForm);
	robotomyForm.execute(haniel);
	shrubberyForm.execute(haniel);
	presidentForm.execute(haniel);
	return (0);
}