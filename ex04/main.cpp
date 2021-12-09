/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 01:11:05 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/01 17:01:18 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#define ARGS 0
#define EMPTY 1
#define INPUT 2
#define OUTPUT 3

int	printError(int err)
{
	if (err == ARGS)
		std::cerr << "Error : wrong number of arguments, use ./replace file s1 s2" << std::endl;
	else if (err == EMPTY)
		std::cerr << "Error : empty strings" << std::endl;
	else if (err == INPUT)
		std::cerr << "Error : input file" << std::endl;
	else if (err == OUTPUT)
		std::cerr << "Error : output file" << std::endl;
	return (1);
}

void	replaceStrings(std::ofstream &fileOut, std::string s1, std::string s2, std::string input)
{
	size_t	pos;
	size_t	toSkip;

	pos = input.find(s1);
	if (pos == std::string::npos)
	{
		fileOut << input;
		return ;
	}
	else
	{
		fileOut << input.substr(0, pos);
		fileOut << s2;
		toSkip = pos + s1.length();
		replaceStrings(fileOut, s1, s2, input.substr(toSkip));
	}
}

int	main(int argc, char **argv)
{
	std::ifstream	fileIn;
	std::ofstream	fileOut;
	std::string		file;
	std::string		s1;
	std::string		s2;
	std::string		buff;

	if (argc != 4)
		return (printError(ARGS));
	file = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (s1.length() == 0 || s2.length() == 0)
		return (printError(EMPTY));
	fileIn.open(file);
	if (fileIn.good() == false)
		return (printError(INPUT));
	fileOut.open(file + ".replace");
	if (fileOut.good() == false)
	{
		fileIn.close();
		return (printError(OUTPUT));
	}
	while (getline(fileIn, buff))
		replaceStrings(fileOut, s1, s2, buff + '\n');
	fileIn.close();
	fileOut.close();
	return (0);
}