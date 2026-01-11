/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpflegha <jpflegha@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 15:34:39 by jpflegha          #+#    #+#             */
/*   Updated: 2026/01/11 16:12:55 by jpflegha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
	std::string *strPtr = &str;
	std::string &strRef = str;

	std::cout << "The memory address of the str variable: "<< &str << std::endl;
	std::cout << "The memory address held by strPTR: " << strPtr << std::endl;
	std::cout << "The memory address held by strREF: " << &strRef << std::endl;

	std::cout << std::endl;
    
	std::cout << "The value of the string variable: " << str << std::endl;
	std::cout << "The value pointed to by strPTR: "<< *strPtr << std::endl;
	std::cout << "The value pointed to by strREF: " << strRef << std::endl;
    
    std::cout << std::endl;

	return (0);
}

// Memory Address (Example)    Variable / Pointer / Reference    Value
// -------------------        ----------------------------    ------------------
// 0x1000                     string                          "HI THIS IS BRAIN"
// 0x1008                     stringPRT                        0x1000  <-- points to string
// 0x1010                     stringREF                        (alias of string, same as 0x1000)
