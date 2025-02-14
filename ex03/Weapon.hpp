#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string type;
	
	public:
		Weapon();
		Weapon(std::string newType);
		~Weapon();

		const std::string& getType(void) const;
		void		setType(const std::string& newType);
};


#endif