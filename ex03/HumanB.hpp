/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 22:41:09 by estegana          #+#    #+#             */
/*   Updated: 2024/12/25 21:46:46 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon _weaponB;

	public:
		HumanB(std::string name);
		~HumanB();

		void attack();
};

#endif
