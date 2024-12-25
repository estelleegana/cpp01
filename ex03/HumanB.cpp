/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 22:41:07 by estegana          #+#    #+#             */
/*   Updated: 2024/12/25 21:47:01 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weaponB("none")
{
	_name = name;
	std::cout << _name << " prend vie ac une arme de type " << _weaponB.getType() << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Destructeur called = HumanB" << std::endl;
}

void HumanB::attack()
{
	std::cout << "HumanB attacks with their..." << std::endl;
}
