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
		//lire ligne par ligne, remplacer et copier ds filename.replace
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		std::string line;
		std::string modif;
		int i;
		while (getline(file, line))
		{
			//si s1 est ds la line
			if (line.find(s1) != std::string::npos)
			{
				//trouver s1, et sa position ac curseur i
				while ((i = line.find(s1)) != std::string::npos)
				{
					// std::cout << "i: " << i << std::endl;
					//creer nouvelle line sans s1
					modif.append(line.substr(0, i));
					// std::cout << "modif-s1: " << modif << std::endl;
					//ajouter s2
					modif.append(s2);
					// std::cout << "modif+s2: " << modif << std::endl;
					//avancer a apres s2
					i = i + s1.length();
					// std::cout << "i+s2: " << i << std::endl;
					//remplacer line par reste de line apres remplacement
					line = line.substr(i);
					// std::cout << "reste de line: " << line << std::endl;
					i = 0;
				}
				line = modif;
			}
			//ajouter line au filename.replace
			replace << line;
			replace << std::endl;
		}
	}
}
