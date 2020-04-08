#pragma once
#include "Zombie.hpp"
#include <random>
class ZombieHorde{
	public:
	Zombie *list = nullptr;
	int size;
	ZombieHorde(int N)
	{
		int num;
		size = N;
		std::string tab[] = {"Nova", "Lilian", "Amalia", "Luna", "Chucky", "Damien", "Freddy", "Bates", "Cole", "Carrie"};
		list = new Zombie[N];
		for (int i = 0; i < N; i++)
		{
			std::random_device rd;
			std::mt19937 gen(rd());
			std::uniform_int_distribution<> num(0,9);
			list[i].name = tab[num(gen)];
			list[i].type = 's';
		}
	}
	void	announce()
	{
		for (size_t i = 0; i < size && list; i++)
		{
			list[i].announce();
		}

	}
	~ZombieHorde()
	{
		delete[] list;
	}
};
