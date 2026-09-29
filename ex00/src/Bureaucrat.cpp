/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 20:46:13 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/09/28 20:47:38 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _score(0) {}

Bureaucrat::Bureaucrat(std::string name, int score) : _name(name), _score(score) {}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	if (this != &other)
	{

	}
	return (*this);
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat::Bureaucrat	&operator = (const Bureaucrat &other)
{

}
