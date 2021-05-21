#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon &new_weapon) : name(new_name), wep(new_weapon)
{
}

void HumanA::attack()
{
	std::cout << name + " attacks with his " + wep.type + "\n";
}
