/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 22:41:04 by estegana          #+#    #+#             */
/*   Updated: 2024/12/26 18:23:52 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon & _weaponA;

	public:
		HumanA(std::string name, Weapon & weaponA);
		~HumanA();

		void attack();
};

#endif
