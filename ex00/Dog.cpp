/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:53:05 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/08 10:23:39 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Default Constructor Dog Called" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog &other) {
    std::cout << "Copy Constructor Dog Called" << std::endl;
    type = other.type;
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "Copy Asigment Constructor Dog Called" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return (*this);
}

Dog::~Dog() {
    std::cout << "Destructor Dog Called" << std::endl;
}

std::string Dog::getType() const{
    return type;
}

void Dog::makeSound() const {
    std::cout << "Houaf Houaf !!!" << std::endl;
}