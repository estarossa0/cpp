#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->type = '0';
	this->name = name;
	std::cout << "Zombie type " << this->type << " is born.\n";
}

Zombie::~Zombie()
{
	std::cout << "Zombie type " << this->type << " is now dead.\n";
}

void	Zombie::announce()
{
	std::cout << "<" + name + " (" + type + ")> Give me a hug...\n";
}
