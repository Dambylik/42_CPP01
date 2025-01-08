/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:02:19 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/19 14:01:58 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const & name, Weapon& weapon) : name(name), _weapon(weapon) {
	
	std::cout << GREEN << "HumanA created..." << RESET << std::endl;
}

HumanA::	~HumanA() {
	
	std::cout << GREEN << "HumanA destroyed..." << RESET << std::endl;
}

void	HumanA::attack(void) const
{
	std::cout << GREEN << this->name << " attacks with their " 
				<< this->getWeapon().getType() << RESET << std::endl;
}

Weapon const &	HumanA::getWeapon(void) const
{
	return (this->_weapon);
}

void	HumanA::setWeapon(Weapon const & weapon)
{
	this->_weapon = weapon;
}