/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harlFilter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:27:36 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/19 13:40:20 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harlFilter.hpp"

harlFilter::harlFilter( void ) {

	std::cout << BLUE << "harlFilter created..." << RESET << std::endl; 
	
	this->_complaints[0] = &harlFilter::_debug;
	this->_complaints[1] = &harlFilter::_info;
	this->_complaints[2] = &harlFilter::_warning;
	this->_complaints[3] = &harlFilter::_error;

	harlFilter::_levels[0] = "DEBUG";
	harlFilter::_levels[1] = "INFO";
	harlFilter::_levels[2] = "WARNING";
	harlFilter::_levels[3] = "ERROR";
}

harlFilter::~harlFilter ( void ) {

	std::cout << BLUE << "harlFilter destroyed..." << RESET << std::endl; 
}

void	harlFilter::_debug(void)	const {
	
	std::cout << DEBUG << std::endl;
}

void	harlFilter::_info(void)	const {
	
	std::cout << GREEN << INFO << RESET << std::endl;
}

void	harlFilter::_warning(void)	const {
	
	std::cout << YELLOW << WARNING << RESET << std::endl;
}

void	harlFilter::_error(void)	const {
	
	std::cout << RED << ERROR << std::endl;
}

void	harlFilter::complain(std::string level)	const {
	
	int	flag = 0;
	int	i;

	for (i = 0; i < 4; i++)
		if (!level.compare(harlFilter::_levels[i]) && ++flag)
			break ;
	
	if (!flag)
	{
		std::cout << INSIGNIFICANT << std::endl;
		return ;
	}

	switch (i)
	{
		case 0:
			this->_message(0);
		case 1:
			this->_message(1);
		case 2:
			this->_message(2);
		case 3:
			this->_message(3);
		default:
			break;
	}
}

void	harlFilter::_message(int const i)	const {
	
	std::cout << "[ " << this->_levels[i] << " ]" << std::endl;
	(this->*(this->_complaints[i]))();
	std::cout << std::endl;
}
