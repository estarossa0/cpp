#pragma once
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
private:
	std::string	const _type;
	unsigned int _xp;
	AMateria();
public:
	AMateria(std::string const & type);
	AMateria(AMateria const &other);
	AMateria &operator=(AMateria const &other);
	virtual ~AMateria();
	std::string const & getType() const;
	unsigned int getXP() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
protected:
	void	setXpUp();
};
