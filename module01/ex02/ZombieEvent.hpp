#pragma once
#include "Zombie.hpp"
class ZombieEvent
{
	private:
		char	ZombieEventType = 'd';
	public:
		void setZombieType(char type)
		{
			ZombieEventType = type;
		}
		Zombie *newZombie(std::string name)
		{
			Zombie *walking_death = new Zombie;
			walking_death->name = name;
			walking_death->type = ZombieEventType;
			return (walking_death);
		}
};
void randomChump();
