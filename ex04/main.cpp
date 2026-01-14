/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpflegha <jpflegha@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:28:31 by jpflegha          #+#    #+#             */
/*   Updated: 2026/01/15 00:27:08 by jpflegha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

std::string Replace(std::string input, std::string replace, std::string search)
{
    //TODO
}

int main(int ac, char **av)
{
    if (ac < 4)
    {
        std::cout   << "Not enough arguments!" <<std::endl;
    }
    else if(ac == 4)
    {
        std::ifstream inFile;
        inFile.open(av[1]);
        if (inFile.fail())
        {
            std::cerr << "Fialed to open" << std::endl;
            return 1;
        }
        std::ofstream outFile;
        outFile.open((std::string(av[1]) + ".replace").c_str());
        if (outFile.fail())
        {
            std::cerr << "Fialed to open" << std::endl;
            return 1;
        }
        std::string line;
        const std::string repalce = av[2];
        const std::string search = av[3];
        while (std::getline(inFile, line))
        {
            line = Replace(line, repalce, search);
            outFile << line;
            if (inFile.peek() != EOF)
						outFile << std::endl;
        }
        inFile.close();
        outFile.close();
    }
    else
    {
        std::cout   << "To many arguments!" <<std::endl;
        return 1;
    }
    return 0;
}