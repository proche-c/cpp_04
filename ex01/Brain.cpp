/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
Brain::Brain(void)
{
	std::cout << "Default Brain constructor called." << std::endl;
	return ;
}

Brain::Brain(Brain &src)
{
	std::cout << "Copy Brain constructor called." << std::endl;
	*this = src;
	return ;
}

Brain::~Brain(void)
{
	std::cout <<"Brain destructor called." << std::endl;
	return ;
}

Brain & Brain::operator=(Brain &src)
{
	std::cout << "Copy Brain assignment operator called." << std::endl;
	if (this != &src)
	{
		int	i = 0;
		while (i < 100)
		{
			this->ideas[i] = src.getIdea(i);
			i++;
		}
	}
	return *this;
}

std::string	Brain::getIdea(int ind)
{
	return this->ideas[ind];
}

void	Brain::setIdea(std::string idea, int ind)
{
	this->ideas[ind] = idea;
	return ;
}

void	Brain::printBrain(void)
{
	int	i = 0;
	while (i < 100)
	{
		if (this->ideas[i] != "")
			std::cout << "Idea " << i << ": " << this->ideas[i] << std::endl;
		i++;
	}
}