/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:47:11 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/08 10:49:55 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "meta is a " << meta->getType() << std::endl;
    std::cout << "J is a " << j->getType() << std::endl;
    std::cout << "I is a " << i->getType() << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    
    delete meta;
    delete i;
    delete j;

    std::cout << std::endl;
    
    const WrongAnimal *wrongWrong = new WrongAnimal();
    const WrongAnimal *wrong = new WrongCat();
    
    std::cout << "wrong is " << wrong->getType() << std::endl;
    std::cout << "wrongWrong is " << wrongWrong->getType() << std::endl;
    wrong->makeSound();
    wrongWrong->makeSound();

    delete wrongWrong;
    
    delete wrong;

    return 0;
}