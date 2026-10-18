/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpflegha <jpflegha@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 13:57:33 by jpflegha          #+#    #+#             */
/*   Updated: 2026/01/11 15:30:16 by jpflegha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie** zombieHorde( int N, std::string name )
{

    if (N <= 0)
        return nullptr;
    Zombie** horde = new Zombie*[N];
     for (int i = 0; i < N; i++)
    {
        horde[i] = new Zombie(name + std::to_string(i + 1));
    }

    return horde;
    
}