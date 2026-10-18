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
#include <cstddef>
#include <sstream>

Zombie** zombieHorde( int N, std::string name )
{

    if (N <= 0)
        return NULL;
    Zombie** horde = new Zombie*[N];
     for (int i = 0; i < N; i++)
    {
        std::ostringstream num;
        num << (i + 1);
        horde[i] = new Zombie(name + num.str());
    }

    return horde;
    
}