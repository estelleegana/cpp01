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
		std::cout << "enter the following parameters: ./sed <filename> string1 string2" << std::endl;
	else
	{
		//ouvrir le filename (argv1)
		std::ifstream file;
		file.open(argv[1]);
		if (!file)
		{
			std::cout << "file does not exist" << std::endl;
			exit(1);
		}
		//creer un filename.replace
		std::string nom1;
		std::string nom2;
		std::string nom_vf;
		nom1 = argv[1];
		nom2 = ".replace";
		nom_vf = nom1 + nom2;
		std::ofstream replace;
		replace.open(nom_vf);
		//lire ligne par ligne et copier ds filename.replace
		std::string line;
		getline(file, line);
		while (file)
		{
			replace << line;
			replace << std::endl;
			getline(file, line);
		}
		//remplacer s1 par s2 dans filename.replace
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		//std::cout << "s1 et s2 : " << s1 << s2 << std::endl;
		std::string verif;
	}
}
