/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 18:20:51 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/19 11:58:36 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define BLUE "\033[0;34m"
#define YELLOW "\033[0;33m"
#define RESET "\033[0;0m"

#define DEBUG "🤨 I love having extra bacon for my burger. I really do!"
#define INFO "😤 You didn’t put enough bacon in my burger!"
#define WARNING "😡 I think I deserve to have some extra bacon for free."
#define ERROR "🤬 This is unacceptable! I want to speak to the manager now."

class Harl
{
	public:
    
		Harl();
		~Harl();

		void	            complain(std::string level)	const;
    
    private:
    
		void	            _debug(void)					const;
		void	            _info(void)						const;
		void	            _warning(void)					const;
		void	            _error(void)					const;
		void                (Harl::*_complaints[4])(void)	const;
		
		std::string			_levels[4];
};
