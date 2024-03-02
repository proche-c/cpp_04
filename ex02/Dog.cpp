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

Dog::Dog(void)
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Default Dog constructor called." << std::endl;
	return ;
}

Dog::Dog(Dog &src)
{
	std::cout << "Copy Dog constructor called." << std::endl;
	*this = src;
	return ;
}

Dog::~Dog(void)
{
	delete brain;
	std::cout <<"Dog destructor called." << std::endl;
	return ;
}

Dog & Dog::operator=(Dog &src)
{
	std::cout << "Copy Dog assignment operator called." << std::endl;
	if (this != &src)
	{
		this->type = src.getType();
		delete this->brain;
		this->brain = new Brain(*src.brain);
	}
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Guauuuuu..." << std::endl;
	return ;
}

Brain * Dog::getBrain(void) const
{
	return this->brain;
}

void	Dog::setBrain(Brain *b)
{
	delete this->brain;
	this->brain = new Brain(*b);
}

void	Dog::setIdeaAnimal(std::string idea, int ind)
{
	this->brain->setIdea(idea, ind);
}

void	Dog::printBrainAnimal(void)
{
	this->brain->printBrain();
}