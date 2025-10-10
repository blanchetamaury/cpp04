/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:15:12 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/09 11:26:13 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {
    //std::cout << "Default constructor Cure called" << std::endl;
    name = "cure"; 
}

Cure::~Cure() {
    //std::cout << "Destructor Cure called" << std::endl;
}

Cure::Cure(const Cure &other): AMateria("cure") {
    //std::cout << "copy constructor Cure called" << std::endl;
    this->name = other.name;
}

Cure &Cure::operator=(const Cure &other) {
    //std::cout << "operator constructor called" << std::endl;
    if (this != &other) {
        name = other.name;
    }
    return (*this);
}

AMateria* Cure::clone() const {
    return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() <<"'s wounds *" << std::endl;
}