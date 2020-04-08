#pragma once
#include "Weapon.hpp"

class HumanB
{
public:
	Weapon wep;
	std::string name;

	HumanB(std::string new_name)
	{
		name = new_name;
	}
	void	setWeapon(Weapon new_weapon)
	{
		wep = new_weapon;
	}
	void attack()
	{
		std::cout << name + " attacks with his " + wep.type + "\n";
	}
};
