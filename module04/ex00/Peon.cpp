#include "Peon.hpp"

Peon::Peon()
{}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog.\n";
}

Peon::Peon(Peon const &other)
{
	*this = other;
}

Peon &Peon::operator=(Peon const &other)
{
	this->m_name = other.getName();
	return *this;
}

Peon::~Peon()
{
	std::cout << "Bleuark...\n";
}

std::ostream &operator<<(std::ostream &out, Peon const &other)
{
	return (out << "I'm " + other.getName() + " and I like otters!\n");
}

void Peon::getPolymorphed() const
{
	std::cout << m_name + " has been turned into a pink pony!\n";
}
