/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource(void):IMateriaSource()
{
	for (int i = 0; i < MAX_KNOWN; i++)
		this->_know[i] = NULL;
	std::cout << "Default MateriaSource constructed called." << std::endl;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src):IMateriaSource()
{
	for (int i = 0; i < MAX_KNOWN; i++)
	{
		if (src._know[i] != NULL)
			this->_know[i] = src._know[i]->clone();
		else
			this->_know[i] = NULL;
	}
	std::cout << "Copy MateriaSource constructor called." << std::endl;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < MAX_KNOWN; i++)
	{
		if (this->_know[i] != NULL)
		{
			delete this->_know[i];
			this->_know[i] = NULL;
		}
	}
	std::cout <<"MateriaSource destructor called." << std::endl;
	return ;
}

MateriaSource & MateriaSource::operator=(MateriaSource const &src)
{
	if (this != &src)
	{
		for (int i = 0; i < MAX_KNOWN; i++)
		{
			if (this->_know[i] != NULL)
				delete this->_know[i];
			if (src._know[i] != NULL)
				this->_know[i] = src._know[i]->clone();
			else
				this->_know[i] = NULL;
		}
	}
	std::cout << "MateriaSource copy assignment operator called." << std::endl;
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < MAX_KNOWN; i++)
	{
		if (this->_know[i] == NULL)
		{
			this->_know[i] = m;
			return ;
		}
	}
	return ;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < MAX_KNOWN; i++)
	{
		if (this->_know[i]->getType() == type)
			return this->_know[i]->clone();
	}
	return NULL;
}