/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
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
class AForm
{
private:
	const std::string	_name;
	bool				_signed;
	const unsigned int	_signGrade;
	const unsigned int	_executionGrade;

public:
	AForm(void);
	AForm(const std::string &name, const unsigned int &signGrade,
		const unsigned int &executionGrade);
	AForm(const Form &other);
	virtual ~AForm(void) = 0;

	AForm	&operator = (const AForm &other);

	std::string	getName(void) const;
	bool	getSigned(void) const;
	unsigned int	getSignGrade(void) const;
	unsigned int	getExecutionGrade(void) const;

	void	beSigned(const Bureaucrat &bureaucat);
	void	excute(const Bureaucrat &bureaucat);
	virtual	action(const Bureaucrat &bureaucrat) const = 0;

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

	class FormIsNotSignedException : public std::exception
	{
		public:
			const char	*what(void) const throw();
	};
};

std::ostream	&operator << (std::ostream &os, const AForm &other);