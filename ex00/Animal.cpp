/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default Animal constructor called." << std::endl;
	return ;
}

Animal::Animal(std::string atype):type(atype)
{
	std::cout << "Type Animal constructor called." << std::endl;
	return ;	
}

Animal::Animal(Animal const &src)
{
	std::cout << "Copy Animal constructor called" << std::endl;
	*this = src;
	return ;
}

Animal::~Animal(void)
{
	std::cout <<"Animal destructor called." << std::endl;
	return ;
}

Animal & Animal::operator=(Animal const &src)
{
	std::cout << "Animal copy assignment operator called." << std::endl;
	if (this != &src)
	{
		this->type = src.getType();
	}
	return *this;
}

std::string	Animal::getType(void) const
{
	return this->type;
}

void	Animal::setType(std::string type)
{
	this->type = type;
	return ;
}

void	Animal::makeSound(void) const
{
	std::cout << "Grrrrrrr..." << std::endl;
	return ;
}
