/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:02:27 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/08 10:45:11 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::~Character() {
    //std::cout << "Destructor Character called" << std::endl;
    for (int i = 0; i < 4; i++) {
        if (slots[i] != NULL)
            delete slots[i];
    }
}

Character::Character() {
    //std::cout << "Default constructor Character called" << std::endl;
    _user = "";
    for (int i = 0; i < 4; i++)
        slots[i] = NULL;
}

Character::Character(std::string user) {
    //std::cout << "Asigment constructor Character called" << std::endl;
    _user = user;
    for (int i = 0; i < 4; i++)
        slots[i] = NULL;
}

Character::Character(const Character &other) {
    //std::cout << "copy constructor Character called" << std::endl;
    _user  = other._user;
    for (int i = 0; i < 4; i++)
        slots[i] = other.slots[i]->clone();
}

Character &Character::operator=(const Character &other) {
    //std::cout << "operator constructor called" << std::endl;
    if (this != &other) {
        _user  = other._user;
        for (int i = 0; i < 4; i++)
            slots[i] = other.slots[i]->clone();
    }
    return (*this);
}

std::string const &Character::getName() const {
    return _user;
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx <= 3) {
        if (slots[idx] != NULL)
            slots[idx]->use(target);
        else
            std::cout << "slot is empty" << std::endl;
    }
    else
        std::cout << "My slots are it's from 0 to 3 !" << std::endl;
}

void Character::equip(AMateria *m) {
    if (m != NULL) {
        for (int i = 0; i < 4; i++) {
            if (slots[i] == NULL) {
                slots[i] = m;
                return ;
            }
        }
        delete m;
        std::cout << "All slots are full !" << std::endl;
    }
}

void Character::unequip(int idx) {
    if (slots[idx] != NULL)
        slots[idx] = NULL;
}