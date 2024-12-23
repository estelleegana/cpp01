/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 17:19:29 by estegana          #+#    #+#             */
/*   Updated: 2024/12/23 19:54:02 by estegana         ###   ########.fr       */
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

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
