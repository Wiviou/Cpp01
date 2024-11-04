/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <wkeiser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:53:07 by wkeiser           #+#    #+#             */
/*   Updated: 2024/11/02 11:53:08 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>

class Replace
{
public:
	Replace();
	Replace(const std::string& filename, const std::string& s1, const std::string& s2);
	~Replace();
	bool	performReplacement();

private:
	std::string	_filename;
	std::string	_s1;
	std::string	_s2;
	std::string	_content;
	bool		_readFile();
	void		_replaceAll();
	bool		_writeFile();
};

#endif

