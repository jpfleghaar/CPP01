/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpflegha <jpflegha@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:48:27 by jpflegha          #+#    #+#             */
/*   Updated: 2026/01/14 16:03:11 by jpflegha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{}

void    HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}

void    HumanB::attack() const
{
    if (_weapon)
    {
        std::cout   << _name << " attack with their "
                    << _weapon->getType() << std::endl;
    }
    else
    {
        std::cout   << _name << " has no weapon" << std::endl;
    }
}