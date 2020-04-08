#pragma once
#include "Weapon.hpp"

class HumanA
{
public:
	Weapon *wep;
	std::string name;

	HumanA(std::string new_name, Weapon *new_weapon)
	{
		name = new_name;
		wep = new_weapon;
	}
	void attack()
	{
		std::cout << name + " attacks with his " + wep->type + "\n";
	}
};
