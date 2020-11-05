#pragma once
#include <iostream>

class Weapon
{
public:
	std::string type;

	Weapon(std::string new_type);
	Weapon();
	std::string const &get_type();
	void setType(std::string new_type);
};
