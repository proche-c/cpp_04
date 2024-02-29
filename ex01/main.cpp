/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
  Animal  *animals[10];
  int i = 0;

  while (i < 10)
  {
    if (i < 5)
      animals[i] = new Cat();
    else
      animals[i] = new Dog();
    i++;
  }

  i = 0;
  while (i < 10)
  {
    animals[i]->makeSound();
    i++;
  }
  i = 0;
  while (i < 10)
  {
    delete animals[i];
    i++;
  }

  std::cout << "***************************************+" << std::endl;

  Cat *kitty = new Cat();
  kitty->setIdeaAnimal("I'm a cat", 0);
  kitty->setIdeaAnimal("I don't like you", 1);
  kitty->printBrainAnimal();
  delete kitty;
  return 0;
}