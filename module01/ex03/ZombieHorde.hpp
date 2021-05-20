#pragma once
#include "Zombie.hpp"
#include <random>
class ZombieHorde{
	private:
	Zombie *list;
	int size;
	public:
	ZombieHorde(int N);
	void	announce();
	~ZombieHorde();
};
