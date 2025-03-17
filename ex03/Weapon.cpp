/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 22:41:14 by estegana          #+#    #+#             */
/*   Updated: 2024/12/26 20:14:08 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Weapon::Weapon()
// {
// 	std::cout << GREEN << "Constructeur called = Weapon" << RESET << std::endl;
// }

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << bGREEN << "Constructeur called = Weapon " << RESET BLUE <<  _type << RESET << std::endl;
}

Weapon::~Weapon()
{
	std::cout << bRED << "Destructeur called = Weapon " << RESET BLUE << _type << RESET << std::endl;
}



std::string const & Weapon::getType() const
{
	return (_type);
}

void Weapon::setType(std::string type)
{
	_type = type;
}
