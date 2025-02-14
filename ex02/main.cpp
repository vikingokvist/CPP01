#include <iostream>

int		main(void)
{
	std::string hiThisIsBrain = "HI THIS IS BRAIN";
	std::string *stringPTR = &hiThisIsBrain;
	std::string &stringREF = hiThisIsBrain;

	std::cout << &hiThisIsBrain << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << hiThisIsBrain << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return (0);
}