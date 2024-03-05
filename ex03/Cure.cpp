/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(void):AMateria("cure")
{
	std::cout << "Default Cure constructor called." << std::endl;
	return ;
}

Cure::Cure(std::string const &type):AMateria(type)
{
	std::cout << "Default Cure constructor called." << std::endl;
	return ;
}

Cure::Cure(Cure const &src):AMateria(src)
{
	std::cout << "Copy Cure constructor called" << std::endl;
	return ;
}

Cure::~Cure(void)
{
	std::cout <<"Cure destructor called." << std::endl;
	return ;
}

Cure & Cure::operator=(Cure const &src)
{
	std::cout << "Cure copy assignment operator called." << std::endl;
	if (this != &src)
	{
		this->type = src.getType();
	}
	return *this;
}

AMateria* Cure::clone(void) const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	return ;
}