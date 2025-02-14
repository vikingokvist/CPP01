
#include "Zombie.hpp"

int		main(void)
{
	int		N = 0;
	Zombie	*horde;

	horde = zombieHorde(N, "hordeZombie");
	if (!horde)
	{
		std::cout << "Error: Malloc Failure." << std::endl;
		return (1);
	}
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}