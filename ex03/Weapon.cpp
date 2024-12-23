/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 22:41:14 by estegana          #+#    #+#             */
/*   Updated: 2024/12/23 22:52:21 by estegana         ###   ########.fr       */
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

void Weapon::setType(std::string newType)
{
	_type = newType;
}
