#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

HumanB::~HumanB() {}

void		HumanB::attack(void) const
{
	std::cout << name << " attacks with their " << (*weapon).getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	weapon = &newWeapon;
}