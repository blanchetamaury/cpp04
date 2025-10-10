/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:23:40 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/10 10:36:51 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    //std::cout << "default constructor MateriaSource called" << std::endl;
    for (int i = 0; i < 4; i++) {
        tab[i] = NULL;
    }
}

MateriaSource::~MateriaSource() {
    //std::cout << "destructor MateriaSource called" << std::endl;
    for (int i = 0; i < 4; i++) {
        if (tab[i] != NULL)
            delete tab[i];
    }
}

MateriaSource::MateriaSource(MateriaSource const &other) {
    //std::cout << "copy constructor MateriaSource called" << std::endl;
    for (int i = 0; i < 4; i++)
        tab[i] = other.tab[i]->clone();
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
    //std::cout << "operator constructor MateriaSource called" << std::endl;
    if (this != &other) {
        for (int i = 0; i < 4; i++)
            tab[i] = other.tab[i]->clone();
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m) {
    if (m != NULL) {
        for (int i = 0; i < 4; i++) {
            if (tab[i] == NULL) {
                tab[i] = m;
                return ;
            }
        }
        delete m;
        std::cout << "I can't learn anymore !" << std::endl;
    }
}

AMateria* MateriaSource::createMateria(std::string const &type) {
    for (int i = 0; i < 4; i++) {
        if (type == "cure" && tab[i] != NULL && tab[i]->getType() == "cure")
            return (tab[i]->clone());
        if (type == "ice" && tab[i] != NULL && tab[i]->getType() == "ice")
            return (tab[i]->clone());
    }
    std::cout << "I don't know this materia !" << std::endl;
    return (0);
}