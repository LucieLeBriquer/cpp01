/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 00:39:35 by lle-briq          #+#    #+#             */
/*   Updated: 2021/10/25 00:47:11 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	_name = "Zombie";
}

Zombie::Zombie(std::string name) : _name(name)
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << "<" << _name << "> is dead (for good this time)" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << "<" << _name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}