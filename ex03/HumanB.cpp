#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

HumanB::~HumanB() {}

void		HumanB::attack(void) const
{
	if (weapon)
	{
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	}
	else
	{
		std::cout << name << " has no weapon " << std::endl;
	}
}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	weapon = &newWeapon;
}