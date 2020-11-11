#include "Sorcerer.hpp"
#include "Victim.hpp"

Sorcerer::Sorcerer(std::string name, std::string title): m_name(name), m_title(title)
{
	std::cout << m_name + " , "+ m_title + ", is born!\n";
}
Sorcerer::Sorcerer()
{}

Sorcerer &Sorcerer::operator=(Sorcerer const &other)
{
	this->m_name = other.getName();
	this->m_title = other.getTitle();
	return *this;
}

Sorcerer::Sorcerer(Sorcerer const &other)
{
	*this = other;
}

Sorcerer::~Sorcerer()
{
	std::cout << m_name + ", " + m_title + ", is dead. Consequences will never be the same!\n";
}
std::string Sorcerer::getName() const {return m_name;}

std::string Sorcerer::getTitle() const {return m_title;}

std::ostream& operator << (std::ostream &out, Sorcerer const &value)
{
	return(out << "I am " + value.getName() + ", " + value.getTitle() + ", and I like ponies!\n");
}

void Sorcerer::polymorph(Victim const &vic) const
{
	vic.getPolymorphed();
}
