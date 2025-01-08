/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:02:48 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/19 13:39:33 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const & type) : _type(type) {
	
	std::cout << "Weapon created..." << std::endl;
}

Weapon::~Weapon() {
	
	std::cout << "Weapon destroyed... " << std::endl;
}

std::string const &	Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType(std::string const & type)
{
	this->_type = type;
}