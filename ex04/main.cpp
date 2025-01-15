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

int main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "enter the following parameters: ./sed <filename> string1 string2" << std::endl;
	else
	{
		//ouvr le <filename>
		std::ifstream file;
		file.open(argv[1]);
		//si le <filename> existe pas, quitter
		if (!file)
		{
			std::cout << "file does not exist" << std::endl;
			exit(1);
		}
		//creer un filename.replace
		std::string filename = argv[1];
		std::string nom2;
		std::string newname;
		nom2 = ".replace";
		newname = filename + nom2;
		std::ofstream replace;
		replace.open(newname);
		//lire ligne par ligne et copier ds filename.replace
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		std::string line;
		std::string modif;
		getline(file, line);
		int i;
		while (file)
		{
			//remplacer s1 par s2 dans filename.replace
			if ((i = line.find(s1)) != std::string::npos)
			{
				modif = "";
				std::cout << "i: " << i << std::endl;
				modif.append(line.substr(0, i));
				std::cout << "modif: " << modif << std::endl;
				modif.append(s2);
				std::cout << "modif_vf: " << modif << std::endl;
				line = modif;
			}
			replace << line;
			replace << std::endl;
			getline(file, line);
		}
	}
}
