/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:42:08 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/19 13:27:38 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );


int main( int argc, char **argv ) {

   Zombie *zombieLand;
   int n = 1;

    if (argc > 1)
        n = atoi(argv[1]);

    if (argc != 3 || n < 1) {
        std::cout << RED << "Enter at least one zombie and his name:" << RESET 
                    << "./zombie_horde 3 Olaf" << std::endl;
        return (0);
    }
    
    zombieLand = zombieHorde(n, std::string(argv[2]));
    
    for (int i = 0; i < n; i++)
             zombieLand[i].announce();

    delete [] zombieLand;
    
    return (0);
}