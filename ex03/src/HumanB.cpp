/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:01:24 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/19 13:39:19 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const & name) : name(name), _weapon(NULL) {
	
	std::cout << YELLOW << "HumanB created..." << RESET << std::endl;
}

HumanB::~HumanB() {

	std::cout << YELLOW << "HumanB destroyed..." << RESET << std::endl;
}

void	HumanB::setWeapon(Weapon & weapon)
{
	this->_weapon = &weapon;
}

Weapon const *	HumanB::getWeapon()	const
{
	return (this->_weapon);
}

void	HumanB::attack(void) const
{
	std::cout << YELLOW << this->name << " attacks with their " << RESET;
	if (!getWeapon())
		std::cout << YELLOW << "legs and arms" << RESET << std::endl;
	else
		std::cout << YELLOW << getWeapon()->getType() << RESET << std::endl;
}