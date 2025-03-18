/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 21:53:26 by estegana          #+#    #+#             */
/*   Updated: 2024/12/23 22:22:11 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//zombies s'annoncent ds le main
int main(int argc, char **argv)
{
	int N;
	std::string name;
	Zombie *z;

	if (argc != 3)
		std::cout << "please enter ./ZombieHorde <(std::string)name> <(int)N>" << std::endl ;
	else
	{
		name = (std::string)argv[1];
		N = std::stoi(argv[2]);
		z = zombieHorde(N, name);
	}
}
