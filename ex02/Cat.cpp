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

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Default Cat constructor called." << std::endl;
	return ;
}

Cat::Cat(Cat &src)
{
	std::cout << "Copy Cat constructor called." << std::endl;
	*this = src;
	return ;
}

Cat::~Cat(void)
{
	delete brain;
	std::cout <<"Cat destructor called." << std::endl;
	return ;
}

Cat & Cat::operator=(Cat &src)
{
	std::cout << "Copy Cat assignment operator called." << std::endl;
	if (this != &src)
	{
		this->type = src.getType();
		delete this->brain;
		this->brain = new Brain(*src.brain);
	}
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meowwwww..." << std::endl;
	return ;
}

Brain * Cat::getBrain(void) const
{
	return this->brain;
}

void	Cat::setBrain(Brain *b)
{
	delete this->brain;
	this->brain = new Brain(*b);
}

void	Cat::setIdeaAnimal(std::string idea, int ind)
{
	this->brain->setIdea(idea, ind);
}

void	Cat::printBrainAnimal(void)
{
	this->brain->printBrain();
}
