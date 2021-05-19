#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void randomChump()
{
	srand(time(NULL));
	int num = (rand() % 10);
	std::string tab[] = {"Nova", "Lilian", "Amalia", "Luna", "Chucky", "Damien", "Freddy", "Bates", "Cole", "Carrie"};
	Zombie walking_death(tab[num]);
	walking_death.type = 's';
	walking_death.announce();
}

int main()
{
	randomChump();
	Zombie zmb("nameless");
	zmb.announce();
	ZombieEvent zmb_evt;
	zmb_evt.setZombieType('A');
	Zombie *heap_zmb = zmb_evt.newZombie("aloha");
	heap_zmb->announce();
	delete(heap_zmb);
}
