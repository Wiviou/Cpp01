/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <wkeiser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 22:08:33 by wkeiser           #+#    #+#             */
/*   Updated: 2024/10/16 22:08:34 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon		&weapon;

public:
	HumanA(const std::string &name, Weapon &weapon);
	void attack() const;
};

#endif
