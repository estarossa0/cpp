#pragma once

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string name;
	int		ap;
	AWeapon *wep;
	Character();
public:
	Character(Character const &other);
	Character(std::string const & name);
	virtual ~Character();
	Character &operator=(Character const &other);

	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);

	std::string const &getName() const;
	int					getAp() const;
	AWeapon *			getWeapon() const;
};

std::ostream &operator<<(std::ostream &out, Character const &other);
