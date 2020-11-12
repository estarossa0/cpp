#pragma once

#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:

public:
	RadScorpion();
	virtual ~RadScorpion();
	RadScorpion(RadScorpion const &other);
	RadScorpion &operator=(RadScorpion const &other);
};
