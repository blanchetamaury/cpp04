/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:47:11 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/08 10:52:07 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "TEST 1:" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "J is a " << j->getType() << std::endl;
    std::cout << "I is a " << i->getType() << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    
    delete meta;
    delete i;
    delete j;

    std::cout << std::endl;
    
    const WrongAnimal *wrong = new WrongCat();
    std::cout << "wrong is " << wrong->getType() << std::endl;
    wrong->makeSound();
    
    delete wrong;

    std::cout << std::endl;
    std::cout << "TEST 2:" << std::endl;

    const Animal*  list[10];
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            list[i] = new Cat();
        else
            list[i] = new Dog();
        std::cout << std::endl;
    }
    
    for (int i = 0; i < 10; i++)
        delete list[i];
    
    std::cout << std::endl;
    std::cout << "TEST 3:" << std::endl;
    
    Cat* catcopy = new Cat();
    std::cout << "copy set :" << std::endl;
    catcopy->setidea("I am a cat");
    std::cout << "Create Copy :" << std::endl;
    Cat catnew = Cat(*catcopy);
    catnew.setidea("I want food");
    std::cout << "new out :" << std::endl;
    catnew.getidea();
    std::cout << "copy out :" << std::endl;
    catcopy->getidea();
    delete catcopy;
    std::cout << "new out :" << std::endl;
    catnew.getidea();
    return 0;
}