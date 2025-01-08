/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:05:11 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/18 13:00:26 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* zombieWorld = new Zombie[N];
    
    for (int i = 0; i < N; i++) {
        zombieWorld[i].setName(name);
    }
    return (zombieWorld);
}

