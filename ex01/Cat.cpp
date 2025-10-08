/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:50:21 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/07 08:57:09 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal() {
    std::cout << "Default Constructor Cat Called" << std::endl;
    type = "Cat";
    ideas = new Brain();
}

Cat::Cat(const Cat &other): Animal() {
    std::cout << "Copy Constructor Cat Called" << std::endl;
    this->type = other.type;
    this->ideas = new Brain(*other.ideas);
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "Copy Asigment Constructor Cat Called" << std::endl;
    if (this != &other) {
        this->type = other.type;
        this->ideas = new Brain(*other.ideas);
    }
    return (*this);
}

Cat::~Cat() {
    delete ideas;
    std::cout << "Destructor Cat Called" << std::endl;
}

std::string Cat::getType() const {
    return type;
}

void Cat::makeSound() const {
    std::cout << "Miaou Miaou !!!" << std::endl;
}

void Cat::setidea(std::string idea) {
    ideas->setideabrain(idea);
}

void Cat::getidea() {
    ideas->getideabrain();
}