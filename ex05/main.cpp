/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpflegha <jpflegha@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:55:51 by jpflegha          #+#    #+#             */
/*   Updated: 2026/01/15 13:41:46 by jpflegha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl  Harl;
    
    Harl.complain("debug");
    Harl.complain("info");
    Harl.complain("warning");
    Harl.complain("error");
    Harl.complain("unknown");
 
    return 0;
}