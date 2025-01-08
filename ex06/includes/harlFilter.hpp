/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harlFilter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 18:20:51 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/19 12:34:27 by okapshai         ###   ########.fr       */
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
#define WARNING "😡 I think I deserve to have some extra bacon for free.\n I've been coming for years whereas you started working here since last month."
#define ERROR "🤬 This is unacceptable! I want to speak to the manager now."
#define INSIGNIFICANT "[ Probably complaining about insignificant problems ]"

class harlFilter
{
	public:
    
		harlFilter();
		~harlFilter();

		void	            complain(std::string level)	const;
    
    private:
    
		void	            _debug(void)					const;
		void	            _info(void)						const;
		void	            _warning(void)					const;
		void	            _error(void)					const;
		void                (harlFilter::*_complaints[4])(void)	const;
		void				_message(int const i)			const;
		
		std::string			_levels[4];
};