/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 01:11:05 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/09 17:19:56 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

static int	argError(void)
{
	std::cout << "Wrong number of arguments. Use ./karenFilter LEVEL." << std::endl;
	return (1);
}

static int	getLevel(std::string level)
{
	const std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			return (i);
	}
	return (4);
}

int	main(int argc, char **argv)
{
	Karen	karen;
	int		lvl;

	if (argc != 2)
		return (argError());
	lvl = getLevel(argv[1]);
	switch(lvl)
	{
		case 0 :
			karen.complain("DEBUG");
		case 1 :
			karen.complain("INFO");
		case 2 :
			karen.complain("WARNING");
		case 3 :
			karen.complain("ERROR");
			break ;
		default :
			std::cout << "[ Probably complaining about insignificant problem. ]" << std::endl << std::endl;
	}
	return (0);
}