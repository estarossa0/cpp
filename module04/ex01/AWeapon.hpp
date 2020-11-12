#pragma once

#include <iostream>

class AWeapon
{
protected:
	std::string	m_Name;
	int			Damage;
	int			ApCost;
	AWeapon();

public:
	AWeapon(std::string const & name, int damage, int apcost);
	virtual ~AWeapon();
	std::string const &getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
	AWeapon(AWeapon const &other);
	AWeapon &operator=(AWeapon const &other);
};

