/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:27:36 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/19 15:19:52 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {

	std::cout << BLUE << "Harl created..." << RESET << std::endl;
	
	this->_complaints[0] = &Harl::_debug;
	this->_complaints[1] = &Harl::_info;
	this->_complaints[2] = &Harl::_warning;
	this->_complaints[3] = &Harl::_error;

	Harl::_levels[0] = "DEBUG";
	Harl::_levels[1] = "INFO";
	Harl::_levels[2] = "WARNING";
	Harl::_levels[3] = "ERROR";
}

Harl::~Harl ( void ) {

	std::cout << BLUE << "Harl destroyed..." << RESET << std::endl; 
}

void	Harl::_debug(void)	const {
	
	std::cout << DEBUG << std::endl;
}

void	Harl::_info(void)	const {
	
	std::cout << GREEN << INFO << RESET << std::endl;
}

void	Harl::_warning(void)	const {
	
	std::cout << YELLOW << WARNING << RESET << std::endl;
}

void	Harl::_error(void)	const {
	
	std::cout << RED << ERROR << std::endl;
}

void	Harl::complain(std::string level)	const {
	
	for (int i = 0; i < 4; i++)
		if (!level.compare(Harl::_levels[i]))
			(this->*(this->_complaints[i]))();
}