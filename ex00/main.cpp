/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpflegha <jpflegha@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 03:40:00 by jpflegha          #+#    #+#             */
/*   Updated: 2026/01/11 13:42:29 by jpflegha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main()
{
    Zombie* heapZombie = newZombie("HeapZombie");
    Zombie* leak = newZombie("LeakZombie");
    heapZombie->announce();
    leak->announce();
    
    randomChump("StackZombie");

    delete heapZombie;
    delete leak;
    return 0;
}
