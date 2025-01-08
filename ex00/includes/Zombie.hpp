/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:52:38 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/19 13:13:44 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "utils.hpp"

class Zombie
{
	public:

		Zombie( void );
		~Zombie( void );

		void	 		announce( void ) const;
		void			setName( std::string const &str );
		
	private:
	
		std::string 	_name;
		
};