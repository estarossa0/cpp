#pragma once

#include "AWeapon.hpp"

class PoopGun : public AWeapon
{
private:
public:
	PoopGun();
	virtual ~PoopGun();
	PoopGun(PoopGun const &other);
	void attack() const;
	PoopGun &operator=(PoopGun const &other);
};

