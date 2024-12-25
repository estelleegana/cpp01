/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 22:41:01 by estegana          #+#    #+#             */
/*   Updated: 2024/12/25 22:57:19 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weaponA) : _name(name), _weaponA(weaponA)
{
	std::cout << _name << " prend vie ac une arme de type " << _weaponA.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Destructeur called = HumanA" << std::endl;
}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weaponA.getType() << std::endl;
}
