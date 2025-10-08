/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:54:39 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/08 09:02:52 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria {
    private:
        std::string name;
    public:
        Cure();
        ~Cure();
        Cure(const Cure &other);
        Cure &operator=(const Cure &other);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif