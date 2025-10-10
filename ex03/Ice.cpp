/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:46:09 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/09 11:26:22 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
    //std::cout << "Default constructor Ice called" << std::endl;
    name = "ice"; 
}

Ice::~Ice() {
    //std::cout << "Destructor Ice called" << std::endl;
}

Ice::Ice(const Ice &other): AMateria("ice") {
    //std::cout << "copy constructor Ice called" << std::endl;
    this->name = other.name;
}

Ice &Ice::operator=(const Ice &other) {
    //std::cout << "operator constructor called" << std::endl;
    if (this != &other) {
        name = other.name;
    }
    return (*this);
}

AMateria* Ice::clone() const {
    return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
}