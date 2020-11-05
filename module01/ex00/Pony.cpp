#include "Pony.hpp"

pony::~pony()
{
	std::cout << "Pony destroyed\n";
}

pony::pony()
{
	std::cout << "Pony created\n";
	this->desc  = "Pony is cute";
}
