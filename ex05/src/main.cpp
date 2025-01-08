/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:22:18 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/19 15:23:44 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void) {
    
	Harl	harl;

    harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
    harl.complain("ERROR");
}
