/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void):WrongAnimal("WrongCat")
{
	std::cout << "Default WrongCat constructor called." << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const &src)
{
	std::cout << "Copy WrongCat constructor called." << std::endl;
	*this = src;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout <<"WrongCat destructor called." << std::endl;
	return ;
}

WrongCat & WrongCat::operator=(WrongCat const &src)
{
	std::cout << "Copy WrongCat assignment operator called." << std::endl;
	if (this != &src)
	{
		this->type = src.getType();
	}
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meowwwww..." << std::endl;
	return ;
}
