#pragma once

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:
public:
	PlasmaRifle();
	virtual ~PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &other);
	virtual void attack() const;
	PlasmaRifle &operator=(PlasmaRifle const &other);
};

