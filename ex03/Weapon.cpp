#include "Weapon.hpp"

Weapon::Weapon() : type("") {}

Weapon::Weapon(std::string newType) : type(newType) {}

Weapon::~Weapon() {}

const std::string&	Weapon::getType(void) const
{
	return (type);
}

void	Weapon::setType(const std::string& newType)
{
	type = newType;
}