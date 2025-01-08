/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:22:18 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/19 12:40:11 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harlFilter.hpp"

int	main(int argc, char **argv) {
    
    if (argc == 2) {

        harlFilter	harl;
	    harl.complain(argv[1]);
        return (0);
    }
    else {

        std::cout << RED << "Enter one of the four levels : <DEBUG> <INFO> <WARNING> <ERROR>" << RESET << std::endl;
        return (1);
        }	
}