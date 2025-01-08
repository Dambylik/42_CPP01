/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:58:45 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/19 11:30:42 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	public:
	
		HumanB(std::string const & name);
		~HumanB();

		void			setWeapon(Weapon & weapon);
		Weapon const *	getWeapon()	const;
		void			attack()	const;

		std::string		name;
	
	private:
	
		Weapon*			_weapon;
};
