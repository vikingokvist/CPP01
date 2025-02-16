#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::debug(void)
{
	std::cout
	<< "[DEBUG]" << std::endl
	<< "I love having extra bacon for my "
	<< "7XL-double-cheese-triple-pickle-special-ketchup burger. "
	<< "I really do!" 
	<< std::endl;
}

void	Harl::info(void)
{
	std::cout
	<< "[INFO]" << std::endl
	<< "I cannot believe adding extra bacon costs more money. "
	<< "You didn't put enough bacon in my burger! "
	<< "If you did, I wouldn't be asking for more!"
	<< std::endl;
}

void	Harl::warning(void)
{
	std::cout
	<< "[WARNING]" << std::endl
	<< "I think I deserve to have some extra bacon for free. "
	<< "I've been coming for years whereas you started working here since last month."
	<< std::endl;
}

void	Harl::error(void)
{
	std::cout
	<< "[ERROR]" << std::endl
	<< "This is unacceptable! "
	<< "I want to speak to the manager now."
	<< std::endl;
}

void    Harl::complain(std::string level)
{
	void    (Harl::*functionPtrs[4])();

	functionPtrs[0] = &Harl::debug;
	functionPtrs[1] = &Harl::info;
	functionPtrs[2] = &Harl::warning;
	functionPtrs[3] = &Harl::error;

	std::string levelTypes[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int 		logLevel = -1;

	for (int i = 0; i < 4; i++)
	{
		if (level == levelTypes[i])
		{
			logLevel = i;
			break ;
		}
	}

	switch (logLevel)
	{
		case 0: 
			(this->*functionPtrs[0])();
			break ;
		case 1:
			(this->*functionPtrs[0])();
			(this->*functionPtrs[1])();
			break ;
		case 2: 
			(this->*functionPtrs[0])();
			(this->*functionPtrs[1])();
			(this->*functionPtrs[2])();
			break ;
		case 3: 
			(this->*functionPtrs[0])();
			(this->*functionPtrs[1])();
			(this->*functionPtrs[2])();
			(this->*functionPtrs[3])();
			break ;
		default:
			std::cout << "[Probably complaining about insignificant problems]" << std::endl;
			break ;
	}	
}