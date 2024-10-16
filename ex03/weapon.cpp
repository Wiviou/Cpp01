/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <wkeiser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 22:16:03 by wkeiser           #+#    #+#             */
/*   Updated: 2024/10/16 22:16:04 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type) {}

const std::string& Weapon::getType() const
{
	return (type);
}

void Weapon::setType(const std::string& newType)
{
	type = newType;
}
