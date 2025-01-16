/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 22:41:11 by estegana          #+#    #+#             */
/*   Updated: 2024/12/26 20:17:51 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

//decommenter constructeur Weapon
int main()
{
	std::cout << std::endl;
	{
		std::cout << BOLD << "---------- HumanA ----------" << RESET << std::endl; 
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
		club.setType("encore un nouveau EXEMPLE");
		bob.attack();
	}
	std::cout << std::endl;
	{
		std::cout << BOLD << "---------- HumanB ----------" << RESET << std::endl; 
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
