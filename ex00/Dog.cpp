/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void):Animal("Dog")
{
	std::cout << "Default Dog constructor called." << std::endl;
	return ;
}

Dog::Dog(Dog const &src)
{
	std::cout << "Copy Dog constructor called." << std::endl;
	*this = src;
	return ;
}

Dog::~Dog(void)
{
	std::cout <<"Dog destructor called." << std::endl;
	return ;
}

Dog & Dog::operator=(Dog const &src)
{
	std::cout << "Copy Dog assignment operator called." << std::endl;
	if (this != &src)
	{
		this->type = src.getType();
	}
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Guauuu..." << std::endl;
	return ;
}
