/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 22:58:21 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/10/01 22:58:32 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	const std::string	_name;
	bool				_signed;
	const unsigned int	_signGrade;
	const unsigned int	_executionGrade;

public:
	Form(void);
	Form(const std::string &name, const unsigned int &signGrade,
		const unsigned int &executionGrade);
	Form(const Form &other);
	~Form(void);

	Form	&operator = (const Form &other);

	std::string	getName(void) const;
	int	getSigned(void) const;
	unsigned int	getSignGrade(void) const;
	unsigned int	getExecutionGrade(void) const;

	void	beSigned(const Bureaucrat &bureaucat);

	class GradeTooLowException : public std::exception
	{
		public:
			const char	*what(void) const throw();
	};
	
	class GradeTooHighException : public std::exception
	{
		public:
			const char	*what(void) const throw();
	};
};

std::ostream	&operator << (std::ostream &os, const Form &other);