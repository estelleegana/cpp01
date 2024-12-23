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
