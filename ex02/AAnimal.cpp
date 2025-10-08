/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:47:33 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/07 09:33:29 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
    std::cout << "Default Constructor AAnimal Called" << std::endl;
    type = "AAnimal";
}

AAnimal::~AAnimal() {
    std::cout << "Destructor Called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other){
    std::cout << "Copy Constructor AAnimal Called" << std::endl;
    type = other.type;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
    std::cout << "Copy Asigment Constructor AAnimal Called" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return (*this);
}

void AAnimal::makeSound() const {
    std::cout << "not sound" << std::endl;
}

std::string AAnimal::getType() const {
    return type;
}