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

class Bureaucrat
{
private:
	std::string const	_name;
	int					_score;
	
public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int score);
	Bureaucrat(const Bureaucrat &other);
	~Bureaucrat(void);

	Bureaucrat	&operator = (const Bureaucrat &other);
};