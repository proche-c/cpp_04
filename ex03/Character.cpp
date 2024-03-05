/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(void):ICharacter(),_name("")
{
	for (int i = 0; i < INV_SIZE; i++)
		this->_inventory[i] = NULL;
	std::cout << "Default Character constructor called." << std::endl;
	return ;
}

Character::Character(std::string const &name):ICharacter(),_name(name)
{
	for (int i = 0; i < INV_SIZE; i++)
		this->_inventory[i] = NULL;
	std::cout << "Default Character constructor called." << std::endl;
	return ;
}

Character::Character(Character &src):ICharacter()
{
	for (int i = 0; i < INV_SIZE; i++)
	{
		if (src._inventory[i] != NULL)
			this->_inventory[i] = src._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	this->_name = src.getName();
	std::cout << "Copy Character constructor called" << std::endl;
	return ;
}

Character::~Character(void)
{
	for (int i = 0; i < INV_SIZE; i++)
	{
		if (this->_inventory[i] != NULL)
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
	std::cout <<"Character destructor called." << std::endl;
	return ;
}

Character & Character::operator=(Character const &src)
{
	if (this != &src)
	{
		for (int i = 0; i < INV_SIZE; i++)
		{
			if (this->_inventory[i] != NULL)
				delete this->_inventory[i];
			if (src._inventory[i] != NULL)
				this->_inventory[i] = src._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
		this->_name = src.getName();
	}
	std::cout << "Character copy assignment operator called." << std::endl;
	return *this;
}

std::string const &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < INV_SIZE; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	return ;
}

void Character::unequip(int idx)
{
	if (idx > -1 && idx < INV_SIZE && this->_inventory[idx] != NULL)
	{
		delete this->_inventory[idx];
		this->_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > -1 && idx < INV_SIZE && this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}