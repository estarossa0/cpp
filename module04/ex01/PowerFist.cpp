#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fis", 50, 8)
{
	std::cout << "PowerFist constructed\n";
}

PowerFist::PowerFist(PowerFist const &other)
{
	*this = other;
	std::cout << "PowerFist copied\n";
}
PowerFist::~PowerFist()
{
	std::cout << "PowerFist detroyed\n";
}

PowerFist &PowerFist::operator=(PowerFist const &other)
{
	std::cout << "PowerFist = operator called\n";
	this->m_Name = other.getName();
	this->ApCost = other.getAPCost();
	this->Damage = other.getDamage();
	return (*this);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *\n";
}
