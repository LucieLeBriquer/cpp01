/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 01:11:05 by lle-briq          #+#    #+#             */
/*   Updated: 2022/02/16 17:29:47 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	Zombie		*horde;
	int			nbZombies;
	std::string	name = "zombie";

	if (argc == 1 || atoi(argv[1]) <= 0)
		nbZombies = 10;
	else
		nbZombies = atoi(argv[1]);
	if (argc >= 3)
		name = argv[2];
	
	horde = zombieHorde(nbZombies, name);

	for (int i = 0; i < nbZombies; i++)
		horde[i].announce();
	
	delete [] horde;
	std::cout << "The horde of " << nbZombies << " zombies has been eradicated." << std::endl;
	return (0);
}
