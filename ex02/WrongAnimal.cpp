/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default WrongAnimal constructor called." << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string atype):type(atype)
{
	std::cout << "Type WrongAnimal constructor called." << std::endl;
	return ;	
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	*this = src;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout <<"WrongAnimal destructor called." << std::endl;
	return ;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &src)
{
	std::cout << "WrongAnimal copy assignment operator called." << std::endl;
	if (this != &src)
	{
		this->type = src.getType();
	}
	return *this;
}

std::string	WrongAnimal::getType(void) const
{
	return this->type;
}

void	WrongAnimal::setType(std::string type)
{
	this->type = type;
	return ;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Grrrrrrr..." << std::endl;
}
