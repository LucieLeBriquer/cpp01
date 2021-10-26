/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 01:11:05 by lle-briq          #+#    #+#             */
/*   Updated: 2021/10/27 00:47:13 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	Zombie	*horde;
	int		nbZombies;
	int		i;

	if (argc == 1 || atoi(argv[1]) <= 0)
		nbZombies = 10;
	else
		nbZombies = atoi(argv[1]);
	horde = zombieHorde(nbZombies, "zombar");
	i = -1;
	while (++i < nbZombies)
		horde[i].announce();
	delete [] horde;
	return (0);
}