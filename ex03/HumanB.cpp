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

HumanB::HumanB(std::string name) : _name(name), _weaponB(NULL)
{
	std::cout << bGREEN << _name << " prend vie sans arme" << RESET << std::endl;
}

HumanB::~HumanB()
{
	std::cout << bRED << "Destructeur called = HumanB" << RESET << std::endl;
}

void HumanB::setWeapon(Weapon & type)
{
	_weaponB = & type;
}

void HumanB::attack()
{
	if (_weaponB == NULL)
		std::cout << _name << " attacks bare hands" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weaponB->getType() << std::endl;
}
