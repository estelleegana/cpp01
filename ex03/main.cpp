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

//print an attack
//with "crude spiked club"
//then a second attack with "some other type of club"
//for both test cases

int main()
{
	//{
	//	Weapon club = Weapon("crude spiked club");
	//	HumanA bob("Bob", club);
	//	bob.attack();
	//	club.setType("some other type of club");
	//	bob.attack();//marche pas
	//}
	//std::cout << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
