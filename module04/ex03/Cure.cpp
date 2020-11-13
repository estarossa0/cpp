#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::~Cure()
{} 

Cure::Cure(Cure const &other) : AMateria("cure")
{
	*this = other;
}

Cure &Cure::operator=(Cure const &other)
{
	AMateria::operator=(other);
	return (*this);
}
AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " + target.getName() + "’s wounds *\n";
}
