/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:41:32 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/19 13:20:32 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//It creates a zombie, name it, and the zombie announces itself.

void randomChump( std::string name ) {

    Zombie  zombie2 = Zombie();

    zombie2.setName( name );
    zombie2.announce();
}
