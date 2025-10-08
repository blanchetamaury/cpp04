/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:43:04 by amblanch          #+#    #+#             */
/*   Updated: 2025/10/08 09:03:02 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {
    private:
        std::string name;
    public:
        Ice();
        ~Ice();
        Ice(const Ice &other);
        Ice &operator=(const Ice &other);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif