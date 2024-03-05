/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
#include "ICharacter.hpp"
#include <string>

class ICharacter;

class AMateria
{
	public:
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(AMateria const &src);
		virtual ~AMateria(void);

		AMateria & operator=(AMateria const &src);

		std::string const &getType() const; //Returns the materia type
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string	type;
		

};
#endif