/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice(void):AMateria("ice")
{
	std::cout << "Default Ice constructor called." << std::endl;
	return ;
}

Ice::Ice(std::string const &type):AMateria(type)
{
	std::cout << "Default Ice constructor called." << std::endl;
	return ;
}

Ice::Ice(Ice const &src):AMateria(src)
{
	std::cout << "Copy Ice constructor called" << std::endl;
	return ;
}

Ice::~Ice(void)
{
	std::cout <<"Ice destructor called." << std::endl;
	return ;
}

Ice & Ice::operator=(Ice const &src)
{
	std::cout << "Ice copy assignment operator called." << std::endl;
	if (this != &src)
	{
		this->type = src.getType();
	}
	return *this;
}

AMateria* Ice::clone(void) const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}