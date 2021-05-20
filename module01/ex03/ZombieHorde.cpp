#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	size = N;
	list = nullptr;
	std::string tab[] = {"Nova", "Lilian", "Amalia", "Luna", "Chucky", "Damien", "Freddy", "Bates", "Cole", "Carrie"};
	list = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> num(0,9);
		list[i].name = tab[num(gen)];
	}
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < size && list; i++)
	{
		list[i].announce();
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] list;
	std::cout << "Horde destroyed\n";
}
