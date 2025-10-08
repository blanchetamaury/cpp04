/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 10:39:12 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/08 10:53:35 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "Default Constructor WrongCat Called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other) {
    std::cout << "Copy Constructor WrongCat Called" << std::endl;
    type = other.type;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    std::cout << "Copy Asigment Constructor WrongCat Called" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return (*this);
}

WrongCat::~WrongCat() {
    std::cout << "Destructor WrongCat Called" << std::endl;
}

std::string WrongCat::getType() {
    return type;
}

void WrongCat::makeSound() const {
    std::cout << "Miaou Miaou !!!" << std::endl;
}