/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <wkeiser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 22:30:18 by wkeiser           #+#    #+#             */
/*   Updated: 2024/10/13 22:30:19 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie*	heapZombie;
	
	heapZombie = newZombie("HeapZombiewannaFight");
	heapZombie->announce();
	delete heapZombie;
	randomChump("StackZombie");
	return 0;
}
