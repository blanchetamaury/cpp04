/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:50:21 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/08 10:24:04 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Default Constructor Cat Called" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat &other) {
    std::cout << "Copy Constructor Cat Called" << std::endl;
    type = other.type;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "Copy Asigment Constructor Cat Called" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return (*this);
}

Cat::~Cat() {
    std::cout << "Destructor Cat Called" << std::endl;
}

std::string Cat::getType() {
    return type;
}

void Cat::makeSound() const {
    std::cout << "Miaou Miaou !!!" << std::endl;
}