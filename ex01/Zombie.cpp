/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 22:07:41 by estegana          #+#    #+#             */
/*   Updated: 2024/12/23 22:10:24 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << bGREEN << "Constructeur called - Zombie" << RESET << std::endl;
}

Zombie::~Zombie()
{
	std::cout << bRED << "Destructeur called - Zombie" << RESET << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}

void Zombie::announce( void )
{
	std::cout << bBLUE << _name << RESET << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
