#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *\n";
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *\n";
}

RadScorpion::RadScorpion(RadScorpion const &other)
{
	*this = other;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &other)
{
	this->hp = other.getHP();
	this->type = other.getType();
	return (*this);
}
