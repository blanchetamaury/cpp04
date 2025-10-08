/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 09:39:50 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/08 11:03:28 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
    //std::cout << "default constructor AMateria called" << std::endl;
    _type = "";
}

AMateria::AMateria(std::string const &type) {
    //std::cout << "asigment constructor AMateria called" << std::endl;
    _type = type;
}

AMateria::AMateria(AMateria const &other) {
    //std::cout << "copy constructor AMateria called" << std::endl;
    this->_type = other._type;
}

AMateria &AMateria::operator=(const AMateria &other) {
    //std::cout << "operator constructor AMateria called" << std::endl;
    if (this != &other) {
        _type = other._type;
    }
    return (*this);
}

std::string const &AMateria::getType() const {
    return _type;
}

void AMateria::use(ICharacter& target) {
    std::cout << "* Generic materia use on" << target.getName() <<" *" << std::endl;
}