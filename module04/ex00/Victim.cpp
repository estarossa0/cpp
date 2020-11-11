#include "Victim.hpp"

Victim::Victim()
{}

Victim::Victim(std::string name) : m_name(name)
{
	std::cout << "Some random victim called " + m_name + " just appeared!\n";
}

Victim::~Victim()
{
	std:: cout << "Victim " + m_name + " just died for no apparent reason!\n";
}

Victim & Victim::operator=(Victim const &other)
{
	this->m_name = other.getName();
	return *this;
}

Victim::Victim(Victim const &other)
{
	*this = other;
}

std::string	Victim::getName() const{ return m_name; }

std::ostream &operator<<(std::ostream &out, Victim const &other)
{
	return (out << "I'm " + other.getName() + " and I like otters!\n");
}

void Victim::getPolymorphed() const
{
	std::cout << m_name + " has been turned into a cute little sheep!\n";
}
