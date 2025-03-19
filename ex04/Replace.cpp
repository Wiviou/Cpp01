/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <wkeiser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:54:05 by wkeiser           #+#    #+#             */
/*   Updated: 2024/11/02 11:54:06 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

Replace::Replace(const std::string& filename, const std::string& s1, const std::string& s2)
	: _filename(filename), _s1(s1), _s2(s2) {}

Replace::~Replace() {}

bool Replace::_readFile()
{
	std::ifstream ifs(_filename.c_str()); //std::ifstream input file stream class for reading files
	if (!ifs)
	{
		std::cerr << "Error: Cannot open file " << _filename << std::endl;
		return (false);
	}
	std::stringstream buffer;
	buffer << ifs.rdbuf(); // stock tout le fichier dans un flux
	_content = buffer.str(); //convertit le flux en string
	ifs.close();
	return (true);
}

void Replace::_replaceAll()
{
	size_t pos = 0;
	size_t s1_len = _s1.length();

	if (s1_len == 0)
		return ;
	while ((pos = _content.find(_s1, pos)) != std::string::npos)
	{
		_content.erase(pos, s1_len);
		_content.insert(pos, _s2);
		pos += _s2.length();
	}
}

bool Replace::_writeFile()
{
	std::string outputFilename = _filename + ".replace";
	std::ofstream ofs(outputFilename.c_str()); //ouvre nvo fichier en ecriture
	if (!ofs)
	{
		std::cerr << "Error: Cannot create file " << outputFilename << std::endl;
		return (false);
	}

	ofs << _content;
	ofs.close();
	return (true);
}

bool Replace::performReplacement()
{
	if (!_readFile())
		return (false);

	_replaceAll();

	if (!_writeFile())
		return (false);

	return (true);
}
