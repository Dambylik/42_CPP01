/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:55:47 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/19 11:29:58 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
	public:
	
		HumanA(std::string const & name, Weapon& weapon);
		~HumanA();

		void			attack()	const;
		Weapon const &	getWeapon() const;
		void			setWeapon(Weapon const & weapon);
		std::string		name;
		
	private:
	
		Weapon&			_weapon;
};
