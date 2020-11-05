#include "HumanB.hpp"

HumanB::HumanB(std::string new_name)
{
	name = new_name;
}
void	HumanB::setWeapon(Weapon new_weapon)
{
	wep = new_weapon;
}

void	HumanB::attack()
{
	std::cout << name + " attacks with his " + wep.type + "\n";
}
