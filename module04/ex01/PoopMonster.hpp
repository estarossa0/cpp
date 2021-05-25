#pragma once

#include <iostream>
#include "Enemy.hpp"

class PoopMonster : public Enemy
{
private:

public:
	PoopMonster();
	virtual ~PoopMonster();
	PoopMonster(PoopMonster const &other);
	PoopMonster &operator=(PoopMonster const &other);
};
