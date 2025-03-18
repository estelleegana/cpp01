/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 21:50:49 by estegana          #+#    #+#             */
/*   Updated: 2024/12/23 21:53:15 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

#define bRED "\033[1;31m"
#define bGREEN "\033[1;32m"
#define bBLUE "\033[1;34m"
#define RESET "\033[0m"

class Zombie {
private:
	std::string _name;//attribut prive de type string

public:
	Zombie();//constructeur
	~Zombie();//destructeur

	void setName(std::string name);
	void announce( void );//fonction membre
};

Zombie* zombieHorde( int N, std::string name );

#endif
