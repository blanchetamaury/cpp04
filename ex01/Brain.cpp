/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:09:13 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/08 10:33:51 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    index = 0;
    std::cout << "Default constructor Brain called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Destructor Brain Called" << std::endl;
}

Brain::Brain(const Brain &other) {
    std::cout << "copy Constructor Brain Called" << std::endl;
    for (int i = 0; i < 100; i++) {
        array[i] = other.array[i];
        index = other.index;
    }
}

Brain &Brain::operator=(const Brain &other) {
    std::cout << "copy operator Constructor Brain Called" << std::endl;
    for (int i = 0; i < 100; i++) {
        array[i] = other.array[i];
        index = other.index;
    }
    return *this;
}

void Brain::setideabrain(std::string idea) {
    index = index % 100;
    array[index] = idea;
    index++;
}

void Brain::getideabrain() {
    for(int i = 0; i < 100; i++) {
        if (array[i] == "")
            break;
        std::cout << "idea[" << i << "] is: \"" << array[i] << "\"" << std::endl;
    }
}