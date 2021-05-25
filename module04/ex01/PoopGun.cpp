#include "PoopGun.hpp"

PoopGun::PoopGun() : AWeapon("poop gun", 2, 100)
{
	std::cout << "PoopGun constructed\n";
}

PoopGun::PoopGun(PoopGun const &other)
{
	*this = other;
	std::cout << "PoopGun copied\n";
}
PoopGun::~PoopGun()
{
	std::cout << "PoopGun detroyed\n";
}

PoopGun &PoopGun::operator=(PoopGun const &other)
{
	std::cout << "PoopGun = operator called\n";
	this->m_Name = other.getName();
	this->ApCost = other.getAPCost();
	this->Damage = other.getDamage();
	return (*this);
}

void PoopGun::attack() const
{
	std::cout << "* pchlaakh *\n";
}
