#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh...\n";
}

SuperMutant::SuperMutant(SuperMutant const &other)
{
	*this = other;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &other)
{
	this->hp = other.getHP();
	this->type = other.getType();
	return (*this);
}

void SuperMutant::takeDamage(int amount)
{
	amount -= 3;
	if (hp < 0 || amount < 0)
	{
		std::cout << type + " taking " << amount << " damage\n";
		hp -= amount;
		if (hp < 0)
			hp = 0;
	}
}
