/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpflegha <jpflegha@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 12:39:33 by jpflegha          #+#    #+#             */
/*   Updated: 2026/01/14 15:37:20 by jpflegha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& Weapon)
    : _name(name), _weapon(Weapon)
{}

void HumanA::attack() const
{
    std::cout   <<_name << " attacks with their "
                << _weapon.getType() << std::endl;
}
