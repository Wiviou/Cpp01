/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <wkeiser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:52:44 by wkeiser           #+#    #+#             */
/*   Updated: 2024/11/02 11:52:44 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./replace filename s1 s2" << std::endl;
		return (1);
	}
	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	if (s1.empty())
	{
		std::cerr << "Error: s1 cannot be empty" << std::endl;
		return (1);
	}

	Replace replacer(filename, s1, s2);
	if (!replacer.performReplacement())
		return (1);

	return (0);
}

