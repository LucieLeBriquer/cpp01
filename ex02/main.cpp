/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 01:11:05 by lle-briq          #+#    #+#             */
/*   Updated: 2021/10/27 01:03:19 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address of the string : " << &str << std::endl;
	std::cout << "    using stringPTR " << stringPTR << std::endl;
	std::cout << "    using stringREF " << &stringREF << std::endl;
	std::cout << "Content of the string : " << str << std::endl;
	std::cout << "    using stringPTR " << *stringPTR << std::endl;
	std::cout << "    using stringREF " << stringREF << std::endl;
	return (0);
}