#include "AWeapon.hpp"

AWeapon::AWeapon()
{}

AWeapon::AWeapon(std::string const & name, int damage, int apcost) : m_Name(name), Damage(damage), ApCost(apcost)
{
	std::cout << "AWeapong constucted\n";
}

AWeapon::~AWeapon()
{
	std::cout << "AWeapong destroyed\n";
}

std::string const &AWeapon::getName() const {return (m_Name);}

int	AWeapon::getDamage() const {return Damage;}

int	AWeapon::getAPCost() const {return ApCost;}

AWeapon::AWeapon(AWeapon const &other)
{
	*this = other;
}

AWeapon &AWeapon::operator=(AWeapon const &other)
{
	this->m_Name = other.getName();
	this->ApCost = other.getAPCost();
	this->Damage = other.getDamage();
	return (*this);
}
