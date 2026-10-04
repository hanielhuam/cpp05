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
#include "Form.hpp"

int	main(void)
{
	Form	form1;
	Form	form2("hani Form", 59, 59);
	Form	form3(form1);
	Form	form4 = form2;
	Bureaucrat	bureaucrat1("Haniel", 1);
	Bureaucrat	bureaucrat2("Huam", 150);

	bureaucrat1.signForm(form2);
	bureaucrat2.signForm(form4);
	std::cout << form1 << std::endl << form2 << std::endl <<
	form3 << std::endl << form4 << std::endl;
	return (0);
}