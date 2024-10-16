/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <wkeiser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:47:02 by wkeiser           #+#    #+#             */
/*   Updated: 2024/10/16 15:47:03 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    // Allocate an array for N Zombies
    Zombie* horde = new Zombie[N];

    // Initialize each Zombie's name
    for (int i = 0; i < N; ++i)
    {
        horde[i].setName(name);
    }
    // Return the pointer to the first Zombie
    return horde;
}
