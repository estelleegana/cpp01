/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 22:41:07 by estegana          #+#    #+#             */
/*   Updated: 2024/12/26 20:33:24 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weaponB("none"), _name(name)
{
	std::cout << GREEN << _name << " prend vie ac une arme de type " << _weaponB.getType() << RESET << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Destructeur called = HumanB" << std::endl;
}

void HumanB::setWeapon(Weapon & type)
{
	_weaponB = type;
}

void HumanB::attack()
{
	// _weaponB = Weapon->getType();
	std::cout << "(_weaponB : " << _weaponB.getType() << ")" << std::endl;
	std::cout << _name << " attacks with their " << _weaponB.getType() << std::endl;
}
