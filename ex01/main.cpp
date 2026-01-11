/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpflegha <jpflegha@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 14:19:55 by jpflegha          #+#    #+#             */
/*   Updated: 2026/01/11 15:30:01 by jpflegha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie** zombieHorde( int N, std::string name );

int main()
{
    Zombie** horde = zombieHorde(5, "Zombie");
    for (int i = 0; i < 5; i++)
        horde[i]->announce();
    
    for (int i = 0; i < 5; i++)
        delete horde[i];
    delete[] horde;
    return 0;
}