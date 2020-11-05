#pragma once
#include "Zombie.hpp"
#include <random>
class ZombieHorde{
	public:
	Zombie *list;
	int size;
	ZombieHorde(int N);
	void	announce();
	~ZombieHorde();
};
