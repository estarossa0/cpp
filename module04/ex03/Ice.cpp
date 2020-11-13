#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{}

Ice::~Ice()
{} 

Ice::Ice(Ice const &other) : AMateria("ice")
{
	*this = other;
}

Ice &Ice::operator=(Ice const &other)
{
	AMateria::operator=(other);
	return (*this);
}
AMateria *Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " + target.getName() + " *\n";
}
