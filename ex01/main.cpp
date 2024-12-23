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

int main(int argc, char **argv)
{
	int N = 5;
	std::string name;
	Zombie *z;

	if (argc != 2)
		std::cout << "enter a name (string) in parameter" << std::endl;
	else
	{
		name = (std::string)argv[1];
		for (int i = 0; i < N; i++)
		{
			z = zombieHorde(i, name);
			delete z;
		}
	}
}
