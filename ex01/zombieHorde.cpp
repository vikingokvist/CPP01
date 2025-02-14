#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	if (N <= 0) return (NULL);
	Zombie *horde;
	
	horde = new Zombie[N];
	if (!horde)
		return (NULL);

	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
	}
	return (horde);
}
