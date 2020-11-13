#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	virtual ~Cure();
	Cure(Cure const &other);
	Cure &operator=(Cure const &other);
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};
