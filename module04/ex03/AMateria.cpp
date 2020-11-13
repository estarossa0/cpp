#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::AMateria(std::string const &type) : _type(type), _xp(0)
{}

AMateria::AMateria(AMateria const &other)
{
	*this = other;
}

AMateria &AMateria::operator=(AMateria const &other)
{
	this->_xp = other.getXP();
	return (*this);
}

AMateria::~AMateria()
{}

const std::string &AMateria::getType() const
{
	return (_type);
}

unsigned int AMateria::getXP() const
{
	return (_xp);
}

void	AMateria::use(ICharacter &target)
{
	setXpUp();
	(void)target;
}

void	AMateria::setXpUp()
{
	this->_xp += 10;
}
