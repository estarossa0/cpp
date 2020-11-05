#include "ZombieEvent.hpp"

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie *walking_death = new Zombie(name);
	walking_death->type = this->ZombieEventType;
	return (walking_death);
}

void ZombieEvent::setZombieType(char type)
{
	ZombieEventType = type;
}
ZombieEvent::ZombieEvent()
{
	this->ZombieEventType = '0';
	std::cout << "ZombieEvent created\n";
}
ZombieEvent::~ZombieEvent()
{
	std::cout << "ZombieEvent destroyed\n";
}
