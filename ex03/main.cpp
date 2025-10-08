/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 09:34:21 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/08 10:46:42 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    
    AMateria* tmp;
    
    tmp = src->createMateria("ice");
    me->equip(tmp);
    
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    std::cout << "------- MORE TEST -------\n";

    std::cout << "\nError full inventory :\n";
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    
    std::cout << "\nError full inventory :\n";
    for (int i = 0; i < 4; i++){
        tmp = src->createMateria("cure");
        me->equip(tmp);
    }
    
    std::cout << "\nError type unknow :\n";
    tmp = src->createMateria("ERROR");

    std::cout << "\nError index use :\n";
    me->use(5, *bob);

    delete bob;
    delete me;

    delete src;
    return 0;
}