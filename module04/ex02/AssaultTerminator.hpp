#pragma once

#include "ISpaceMarine.hpp"

class  AssaultTerminator : public ISpaceMarine
{
private:

public:
	AssaultTerminator();
	virtual ~ AssaultTerminator();
	AssaultTerminator( AssaultTerminator const &other);
	AssaultTerminator &operator=( AssaultTerminator const &other);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};
