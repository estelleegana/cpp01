/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 22:41:14 by estegana          #+#    #+#             */
/*   Updated: 2024/12/23 22:56:08 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "Constructeur called = Weapon" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Destructeur called = Weapon" << std::endl;
}

std::string & Weapon::getType()
{
	return (_type);
}

void Weapon::setType(std::string newType)
{
	_type = newType;
}
