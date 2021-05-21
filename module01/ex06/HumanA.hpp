#pragma once
#include "Weapon.hpp"

class HumanA
{
public:
	std::string name;
	Weapon &wep;

	HumanA(std::string new_name, Weapon &new_weapon);
	void attack();
};
