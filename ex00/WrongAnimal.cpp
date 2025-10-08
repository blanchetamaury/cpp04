/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:04:28 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/08 10:50:08 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "Default Constructor WrongAnimal Called" << std::endl;
    type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Destructor WrongAnimal Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other){
    std::cout << "Copy Constructor WrongAnimal Called" << std::endl;
    type = other.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    std::cout << "Copy Asigment Constructor WrongAnimal Called" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return (*this);
}

void WrongAnimal::makeSound() const {
    std::cout << "not sound" << std::endl;
}

std::string WrongAnimal::getType() const {
    return type;
}