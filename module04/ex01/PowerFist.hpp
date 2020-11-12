#pragma once

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:
public:
	PowerFist();
	virtual ~PowerFist();
	PowerFist(PowerFist const &other);
	PowerFist &operator=(PowerFist const &other);
	
	virtual void attack() const;
};

