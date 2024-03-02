/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
#include <string>
#include <iostream>

class AAnimal
{
	public:
		AAnimal(void);
		AAnimal(std::string atype);
		AAnimal(AAnimal const &src);
		virtual ~AAnimal(void);

		AAnimal & operator=(AAnimal const &src);

		std::string	getType(void) const;
		void	setType(std::string type);

		virtual void	makeSound(void) const = 0;

	protected:
		std::string	type;
		

};
#endif