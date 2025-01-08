/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:32:11 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/19 13:38:59 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::		Zombie( void ): _name("Zombie") {

	std::cout << YELLOW << this->_name << " created..." << RESET << std::endl;
}

Zombie::		~Zombie(void) {

	std::cout << RED << this->_name << " destroyed..." << RESET << std::endl;
}

void			Zombie::announce( void) const {
	
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

 void			Zombie::setName( std::string const & str)  {

	this->_name = str;

} 