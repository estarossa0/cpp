#include "poop.hpp"

poop::poop()
{}

poop::poop(std::string name) : Victim(name)
{
	std::cout << "* smells *\n";
}

poop::poop(poop const &other)
{
	*this = other;
}

poop &poop::operator=(poop const &other)
{
	this->m_name = other.getName();
	return *this;
}

poop::~poop()
{
	std::cout << "* flush water *\n";
}

std::ostream &operator<<(std::ostream &out, poop const &other)
{
	return (out << "I'm " + other.getName() + " do you like how I smell ?\n");
}

void poop::getPolymorphed() const
{
	std::cout << m_name + " has tuned into a cake\n";
}
