/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:53:05 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/07 09:01:30 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Default Constructor Dog Called" << std::endl;
    type = "Dog";
    ideas = new Brain();
}

Dog::Dog(const Dog &other) {
    std::cout << "Copy Constructor Dog Called" << std::endl;
    type = other.type;
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "Copy Asigment Constructor Dog Called" << std::endl;
    if (this != &other) {
        this->type = other.type;
        this->ideas = new Brain(*this->ideas);
    }
    return (*this);
}

Dog::~Dog() {
    delete ideas;
    std::cout << "Destructor Dog Called" << std::endl;
}

std::string Dog::getType() const{
    return type;
}

void Dog::makeSound() const {
    std::cout << "Houaf Houaf !!!" << std::endl;
}

void Dog::setidea(std::string idea) {
    ideas->setideabrain(idea);
}

void Dog::getidea() {
    ideas->getideabrain();
}