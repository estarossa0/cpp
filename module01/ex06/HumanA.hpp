#pragma once
#include "Weapon.hpp"

class HumanA
{
public:
	Weapon *wep;
	std::string name;

	HumanA(std::string new_name, Weapon *new_weapon);
	void attack();
};
