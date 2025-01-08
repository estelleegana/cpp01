/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:35:29 by estegana          #+#    #+#             */
/*   Updated: 2024/12/26 20:37:18 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

//<filename>, s1, s2
int main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "enter the following parameters: ./sed filename string1 string2" << std::endl;
	else
	{
		std::ifstream file;
		file.open(argv[0]);
		std::string line;
		getline(file, line);
		std::cout << "getline de file : " << line << std::endl;
		// std::ofstream replace;
		// replace.open("exemple.replace");
		// replace << line;
	}
}
