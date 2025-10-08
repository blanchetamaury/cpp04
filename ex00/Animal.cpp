/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:47:33 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/08 10:49:21 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Default Constructor Animal Called" << std::endl;
    type = "Animal";
}

Animal::~Animal() {
    std::cout << "Destructor Animal Called" << std::endl;
}

Animal::Animal(const Animal &other){
    std::cout << "Copy Constructor Animal Called" << std::endl;
    type = other.type;
}

Animal &Animal::operator=(const Animal &other) {
    std::cout << "Copy Asigment Constructor Animal Called" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return (*this);
}

void Animal::makeSound() const {
    std::cout << "not sound" << std::endl;
}

std::string Animal::getType() const {
    return type;
}