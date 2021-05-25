#include "Character.hpp"

Character::Character() {}

Character::~Character()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete _inventory[i];
	}
}

Character::Character(std::string const name) : _name(name)
{
	for (size_t i = 0; i < 4; i++)
	{
		this->_inventory[i] = nullptr;
	}
}

Character::Character(Character const &other)
{
	*this = other;
}

Character &Character::operator=(Character const &other)
{
	this->_name = other.getName();
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete _inventory[i];
	}
	for (size_t i = 0; i < 4; i++)
	{
		if (other._inventory[i])
		{
			this->_inventory[i] = other._inventory[i]->clone();
		}
		else
			this->_inventory[i] = nullptr;
	}
	return (*this);
}

std::string const &Character::getName(void) const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{
	if (!m) {return;}
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == nullptr)
		{
			this->_inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->_inventory[idx])
		{
			this->_inventory[idx]->use(target);
		}
	}
}
