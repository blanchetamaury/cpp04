/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:47:11 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/08 10:38:54 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "TEST 1:" << std::endl;
    //const AAnimal* meta = new AAnimal();
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    std::cout << "J is a " << j->getType() << std::endl;
    std::cout << "I is a " << i->getType() << std::endl;
    i->makeSound();
    j->makeSound();
    //meta->makeSound();
    
    //delete meta;
    delete i;
    delete j;
}