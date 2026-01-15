/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpflegha <jpflegha@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:28:31 by jpflegha          #+#    #+#             */
/*   Updated: 2026/01/15 00:54:26 by jpflegha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

std::string Replace(std::string str, const std::string replace, const std::string search)
{
    if (search.empty())
        return str;

    size_t rl = replace.length();
    size_t dl = search.length();
    size_t pos = str.find(search);
    
    while (pos != std::string::npos)
    {
        str.erase(pos, dl);
        str.insert(pos, replace);
        pos = str.find(search, pos + rl);
    }
    return (str);
    
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
        const std::string search = av[2];
        const std::string repalce = av[3];
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