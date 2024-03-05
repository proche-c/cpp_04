/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
# define Cure_HPP
#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure(void);
		Cure(std::string const &type);
		Cure(Cure const &src);
		virtual ~Cure(void);

		Cure & operator=(Cure const &src);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
		
};
#endif