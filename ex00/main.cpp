/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 17:19:21 by estegana          #+#    #+#             */
/*   Updated: 2024/12/23 21:40:30 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *z;
	std::string input;

	std::cout << "name a first Zombie so it can announce itself : ";
	getline(std::cin, input);
	z = newZombie(input);
	z->announce();
	delete z;

	std::cout << "name a new Zombie so it can announce itself : ";
	getline(std::cin, input);
	randomChump(input);
}
