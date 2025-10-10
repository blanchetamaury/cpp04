/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:02:27 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/10 11:05:23 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::~Character() {
    //std::cout << "Destructor Character called" << std::endl;
    for (int i = 0; i < 4; i++) {
        if (slots[i] != NULL)
            delete slots[i];
    }
    for (int i = 0; i < size; i++) {
        if (floor[i] != NULL)
            delete floor[i];
        floor[i] = NULL;
    }
    delete[] floor;
    floor = NULL;
}

Character::Character() {
    //std::cout << "Default constructor Character called" << std::endl;
    size = 1;
    floor = new AMateria*[size];
    for (int i = 0; i < size; i++)
        floor[i] = NULL;
    _user = "";
    for (int i = 0; i < 4; i++)
        slots[i] = NULL;
}

Character::Character(std::string user) {
    //std::cout << "Asigment constructor Character called" << std::endl;
    _user = user;
    size = 1;
    floor = new AMateria*[size];
    for (int i = 0; i < size; i++)
        floor[i] = NULL;
    for (int i = 0; i < 4; i++)
        slots[i] = NULL;
}

Character::Character(const Character &other) {
    //std::cout << "copy constructor Character called" << std::endl;
    _user  = other._user;
    size = other.size;
    floor = new AMateria*[size];
    for (int i = 0; i < 4; i++)
    {
        if (other.slots[i] != NULL)
            slots[i] = other.slots[i]->clone();
        else
            slots[i] = NULL;
    }
    for (int i = 0; i < size; i++) {
        if (other.floor[i] != NULL)
            floor[i] = other.floor[i]->clone();
        else
            floor[i] = NULL;
    }
}

Character &Character::operator=(const Character &other) {
    //std::cout << "operator constructor called" << std::endl;
    if (this != &other) {
        for (int i = 0; i < 4; i++) {
            if (slots[i] != NULL)
                delete slots[i];
            slots[i] = NULL;
        }
        for (int i = 0; i < size; i++) {
            if (floor[i] != NULL)
                delete floor[i];
            floor[i] = NULL;
        }
        delete[] floor;
        floor = NULL;
        size = other.size;
        floor = new AMateria*[size];
        _user = other._user;
        for (int i = 0; i < 4; i++)
        {
            if (other.slots[i] != NULL)
                slots[i] = other.slots[i]->clone();
            else
                slots[i] = NULL;
        }
        for (int i = 0; i < size; i++) {
            if (other.floor[i] != NULL)
                floor[i] = other.floor[i]->clone();
            else
                floor[i] = NULL;
        }
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
            std::cout << "slot in index[" << idx << "] is empty" << std::endl;
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
    std::cout << "test" << std::endl;
}

void Character::unequip(int idx) {
    if (idx < 0 || idx > 3) {
        std::cout << "My slots are it's from 0 to 3 !" << std::endl;
        return ;
    }
    if (slots[idx] != NULL) {
        std::cout << "slots in index[" << idx << "] unequip a materia \"" << slots[idx]->getType() << "\"" << std::endl;
        AMateria **tmp = new AMateria*[size + 1];
        for (int i = 0; i < size + 1; i++)
            tmp[i] = NULL;
        for (int i = 0; i < size; i++) {
            tmp[i] = floor[i];
        }
        tmp[size] = slots[idx];
        slots[idx] = NULL;
        delete[] floor;
        floor = tmp;
        size++;
    }
    else {
        std::cout << "slot in index[" << idx << "] is empty" << std::endl;
    }
}