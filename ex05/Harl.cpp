/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <wkeiser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:19:49 by wkeiser           #+#    #+#             */
/*   Updated: 2024/11/04 22:19:56 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain(const std::string &level)
{
	typedef void (Harl::*HarlMemFn)(void);
	// Harl::* indique un pointeur vers fonction membre de classe Harl
	//HarlMemfn : nom de l alias de pointeur vers fct membre de Harl
	
//	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	const char* levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	HarlMemFn funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	//tableau qui stock les pointeurs des diff fonctions membres
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*funcs[i])();
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
}
