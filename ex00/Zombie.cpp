/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 17:19:19 by estegana          #+#    #+#             */
/*   Updated: 2024/12/23 19:58:13 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructeur called - Zombie" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructeur called - Zombie" << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}

void Zombie::announce( void )
{
	std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}


