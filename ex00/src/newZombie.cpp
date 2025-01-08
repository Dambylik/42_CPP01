/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:41:20 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/17 17:57:33 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// It creates a zombie, name it, and return it so you can use it outside of the function scope

Zombie* 		newZombie( std::string name ) {
    
    Zombie* newBornZombie = new Zombie();
    newBornZombie->setName(name);
    return (newBornZombie);
}