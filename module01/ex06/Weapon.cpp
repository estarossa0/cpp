#include "Weapon.hpp"

Weapon::Weapon(std::string new_type)
{
	type = new_type;
}

Weapon::Weapon(){}

std::string const &Weapon::get_type()
{
	return type;
}

void Weapon::setType(std::string new_type)
{
	type = new_type;
}
