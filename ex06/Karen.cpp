#include "Karen.hpp"

Karen::Karen()
{
	return ;
}

Karen::~Karen()
{
	return ;
}

void	Karen::debug(void) const
{
	std::cout << "[ DEBUG ]\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
}

void	Karen::info(void) const
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon cost more money. You don't put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void	Karen::warning(void) const
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month." << std::endl << std::endl;
}

void	Karen::error(void) const
{
	std::cout << "[ ERROR ]\nThis is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}

void	Karen::complain(std::string level) const
{
	const std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	const function_p	complains[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*(complains[i]))();
			return ;
		}
	}
	std::cout << "[ INVALID ] Invalid level. Try again." << std::endl << std::endl;
}