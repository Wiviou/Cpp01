/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <wkeiser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 22:08:50 by wkeiser           #+#    #+#             */
/*   Updated: 2024/10/16 22:08:51 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "weapon.hpp"

class HumanB
{

private:
	std::string	name;
	Weapon		*weapon;

public:
	HumanB(const std::string &name);
	void setWeapon(Weapon &weapon);
	void attack() const;

};

#endif

