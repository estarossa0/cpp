#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "poop.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	poop poopie("Poopie");

	std::cout << robert << jim << joe << poopie;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(poopie);
	return 0;
}
