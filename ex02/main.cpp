/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 22:24:20 by estegana          #+#    #+#             */
/*   Updated: 2024/12/23 22:37:47 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string v = "HI THIS IS BRAIN";
	std::string *stringPTR = &v;
	std::string &stringREF = v;

	std::cout << "adresse de la memoire de la variable v: ";
	std::cout << &v << std::endl;
	std::cout << "adresse de la memoire de stringPTR : ";
	std::cout << &stringPTR << std::endl;
	//std::cout << "(adresse de la memoire de stringPTR right version: " << stringPTR << ")" << std::endl;
	std::cout << "adresse de la memoire de stringREF : ";
	std::cout << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "valeur de la variable v : ";
	std::cout << v << std::endl;
	std::cout << "valeur de stringPTR : ";
	std::cout << &stringPTR << std::endl;
	//std::cout << "(adresse de la memoire de stringPTR right version: " << *stringPTR << ")" << std::endl;
	std::cout << "valeur de stringREF : ";
	std::cout << stringREF << std::endl;
}
