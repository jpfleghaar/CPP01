/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpflegha <jpflegha@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 13:33:00 by jpflegha          #+#    #+#             */
/*   Updated: 2026/01/11 14:10:50 by jpflegha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{}


Zombie::~Zombie()
{
    std::cout << name << " 🧟 has been destroyed" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << name << " 🧟 : BraiiiiiiinnnzzzZ..." << std::endl;
}