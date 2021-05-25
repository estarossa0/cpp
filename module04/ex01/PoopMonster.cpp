#include "PoopMonster.hpp"

PoopMonster::PoopMonster(): Enemy(9999999, "PoopMonster")
{
	std::cout << "* SPLASH *\n";
}

PoopMonster::~PoopMonster()
{
	std::cout << "* WATER FLUSHED *\n";
}

PoopMonster::PoopMonster(PoopMonster const &other)
{
	*this = other;
}

PoopMonster &PoopMonster::operator=(PoopMonster const &other)
{
	this->hp = other.getHP();
	this->type = other.getType();
	return (*this);
}
