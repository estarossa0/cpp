#include "ZombieEvent.hpp"

void randomChump()
{
	srand(time(NULL));
	int num = (rand() % 10);
	std::string tab[] = {"Nova", "Lilian", "Amalia", "Luna", "Chucky", "Damien", "Freddy", "Bates", "Cole", "Carrie"};
	Zombie walking_death;
	walking_death.name = tab[num];
	walking_death.type = 's';
	walking_death.announce();
}
