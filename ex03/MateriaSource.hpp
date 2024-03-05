/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

# define MAX_KNOWN 4

class MateriaSource: public IMateriaSource
{
    public:
        MateriaSource(void);
        MateriaSource(MateriaSource const &src);
        virtual ~MateriaSource();

        MateriaSource & operator=(MateriaSource const &src);

        virtual void learnMateria(AMateria *m);
        virtual AMateria* createMateria(std::string const &type);

    private:
        AMateria *_know[MAX_KNOWN];
};
#endif