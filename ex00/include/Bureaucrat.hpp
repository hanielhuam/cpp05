/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 20:46:53 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/09/28 20:47:02 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#define MIN_GRADE 150
#define MAX_GRADE 1

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat(void);
		Bureaucrat(const std::string &name, const int &grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat(void);

		Bureaucrat	&operator = (const Bureaucrat &other);

		int	getGrade(void) const;
		std::string	getName(void) const;
		void	increment(void);
		void	decrement(void);

		class GradeToolowException : public std::exception
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

std::ostream &operator << (std::ostream &os, const Bureaucrat &other);