#pragma once
#include "Weapon.hpp"

class HumanB
{
public:
	Weapon wep;
	std::string name;

	HumanB(std::string new_name);
	void	setWeapon(Weapon new_weapon);
	void 	attack();
};
