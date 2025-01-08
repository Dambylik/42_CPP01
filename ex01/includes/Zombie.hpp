/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:52:38 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/18 13:01:08 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <new> 
# include <string>
# include  <cstdlib>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define BLUE "\033[0;34m"
#define YELLOW "\033[0;33m"
#define RESET "\033[0;0m"


class Zombie
{
	public:

		Zombie( void );
		~Zombie( void );

		void	 		announce( void ) const;
		void			setName( std::string const & str );
		
	private:
	
		std::string 	_name;
		
};