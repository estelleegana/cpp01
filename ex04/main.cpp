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
		//ouvr//<filename>, s1, s2ir le filename (argv1)
		std::ifstream file;
		file.open(argv[1]);
		if (!file)
		{
			std::cout << "file does not exist" << std::endl;
			exit(1);
		std::string s2 = argv[3];
		std::ofstream replace;
		replace.open(newname);
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
		// std::string wordtest = "non";
		// std::cout << "compare : " << wordtest.compare(s1) << std::endl;
		// std::cout << "compare : " << wordtest.compare(s2) << std::endl;
	}
}
