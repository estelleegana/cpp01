/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 22:41:16 by estegana          #+#    #+#             */
/*   Updated: 2024/12/26 20:11:29 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

#define bRED "\033[1;31m"
#define bGREEN "\033[1;32m"
#define BLUE "\033[0;34m"
#define RESET "\033[0m"


class Weapon
{
	private:
		std::string _type;

	public:
		// Weapon();
		Weapon(std::string _type);
		~Weapon();

		std::string const & getType() const;
		void setType(std::string type);
};

#endif
