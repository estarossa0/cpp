#pragma onces
#include "Zombie.hpp"
class ZombieEvent
{
	private:
		char	ZombieEventType;
	public:
		void setZombieType(char type);
		Zombie *newZombie(std::string name);
		ZombieEvent();
		~ZombieEvent();
};
