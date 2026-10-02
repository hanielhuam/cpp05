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
	Bureaucrat	a("Haniel", 1);
	Bureaucrat	b(a);
	Bureaucrat	c("Haniel", 150);
	try
	{
		Bureaucrat	d("Haniel", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat	e("Haniel", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		b.increment();
	}
	catch(const std::exception	&e)
	{
		std::cerr << e.what() << std::endl;
	}
	b.decrement();
	try
	{
		c.decrement();
	}
	catch(const std::exception	&e)
	{
		std::cerr << e.what() << std::endl;
	}
	c.increment();
	std::cout << a << std::endl << b << std::endl << c << std::endl;
	return (0);
}