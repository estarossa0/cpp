#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

class Character : public ICharacter
{
private:
	AMateria *_inventory[4];
	std::string	_name;
	Character();
public:
	Character(std::string const name);
	Character(Character const &other);
	virtual ~Character();
	Character &operator=(Character const &other);
	std::string const &getName(void) const;
	void equip(AMateria *materia);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};
