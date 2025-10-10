/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:23:31 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/09 09:11:19 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    private:
        AMateria        *tab[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &other);
        MateriaSource &operator=(const MateriaSource &other);
        ~MateriaSource();
        void learnMateria(AMateria*m);
        AMateria* createMateria(std::string const & type);
};

#endif