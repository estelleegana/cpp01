/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 22:24:20 by estegana          #+#    #+#             */
/*   Updated: 2024/12/26 19:42:30 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string v = "HI THIS IS BRAIN";
	std::string *stringPTR = &v;
	std::string &stringREF = v;

	std::cout << "adresse de la memoire de la variable v: "<< &v << std::endl;
	std::cout << "adresse de la memoire de stringPTR : " << stringPTR << std::endl;
	std::cout << "adresse de la memoire de stringREF : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "valeur de la variable v : " << v << std::endl;
	std::cout << "valeur de stringPTR : " << *stringPTR << std::endl;
	std::cout << "valeur de stringREF : " << stringREF << std::endl;
	std::cout << std::endl;
}
