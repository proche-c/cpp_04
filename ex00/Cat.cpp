/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"w	

Cat::Cat(void):Animal("Cat")
{
	std::cout << "Default Cat constructor called." << std::endl;
	return ;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Copy Cat constructor called." << std::endl;
	*this = src;
	return ;
}

Cat::~Cat(void)
{
	std::cout <<"Cat destructor called." << std::endl;
	return ;
}

Cat & Cat::operator=(Cat const &src)
{
	std::cout << "Copy Cat assignment operator called." << std::endl;
	if (this != &src)
	{
		this->type = src.getType();
	}
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meowwwww..." << std::endl;
	return ;
}
