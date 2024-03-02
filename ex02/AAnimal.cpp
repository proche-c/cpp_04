/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "Default AAnimal constructor called." << std::endl;
	return ;
}

AAnimal::AAnimal(std::string atype):type(atype)
{
	std::cout << "Type AAnimal constructor called." << std::endl;
	return ;	
}

AAnimal::AAnimal(AAnimal const &src)
{
	std::cout << "Copy AAnimal constructor called" << std::endl;
	*this = src;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout <<"AAnimal destructor called." << std::endl;
	return ;
}

AAnimal & AAnimal::operator=(AAnimal const &src)
{
	std::cout << "AAnimal copy assignment operator called." << std::endl;
	if (this != &src)
	{
		this->type = src.getType();
	}
	return *this;
}

std::string	AAnimal::getType(void) const
{
	return this->type;
}

void	AAnimal::setType(std::string type)
{
	this->type = type;
	return ;
}
