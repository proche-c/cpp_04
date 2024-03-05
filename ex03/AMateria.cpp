/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(void):type("")
{
	std::cout << "Default AMateria constructor called." << std::endl;
	return ;
}

AMateria::AMateria(std::string const &type):type(type)
{
	std::cout << "Default AMateria constructor called." << std::endl;
	return ;
}

AMateria::AMateria(AMateria const &src)
{
	std::cout << "Copy AMateria constructor called" << std::endl;
	*this = src;
	return ;
}

AMateria::~AMateria(void)
{
	std::cout <<"AMateria destructor called." << std::endl;
	return ;
}

AMateria & AMateria::operator=(AMateria const &src)
{
	std::cout << "AMateria copy assignment operator called." << std::endl;
	if (this != &src)
	{
		this->type = src.getType();
	}
	return *this;
}

std::string const &AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << this->getType() << " used on " << target.getName() << std::endl;
	return ;
}