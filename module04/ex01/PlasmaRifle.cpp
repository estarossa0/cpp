#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
	std::cout << "PlasmaRifle constructed\n";
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &other)
{
	*this = other;
	std::cout << "PlasmaRifle copied\n";
}
PlasmaRifle::~PlasmaRifle()
{
	std::cout << "PlasmaRifle detroyed\n";
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &other)
{
	std::cout << "PlasmaRifle = operator called\n";
	this->m_Name = other.getName();
	this->ApCost = other.getAPCost();
	this->Damage = other.getDamage();
	return (*this);
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *\n";
}
