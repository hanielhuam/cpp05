/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 21:26:08 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/10/03 21:26:42 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	AForm("ShrubberyCreationForm", 145, 137), _target("default")
{
	std::cout << "[ShrubberyCreationForm] Default constructor was called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "[ShrubberyCreationForm] Parametirized constructor was called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : 
	AForm(other), _target(other._target)
{
	std::cout << "[ShrubberyCreationForm] Copy constructor was called!" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "[ShrubberyCreationForm] Destructor was called!" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator = (const ShrubberyCreationForm &other)
{
	std::cout << "[ShrubberyCreationForm] sign operator was called!" << std::endl;
	if (this != &other)
		AForm::operator = (other);
	return (*this);
}

void	ShrubberyCreationForm::action(void) const
{
	std::ofstream outputFile((this->_target + "_shrubbery").c_str());
  	outputFile << "   *\n";
  	outputFile << "  /|\\\n";
  	outputFile << " / | \\\n";
  	outputFile << "/__|__\\\n";
  	outputFile << "   |\n";
  	outputFile.close();
}
