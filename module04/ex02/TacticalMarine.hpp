#pragma once

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
private:
	
public:
	TacticalMarine();
	virtual ~TacticalMarine();
	TacticalMarine(TacticalMarine const &other);
	TacticalMarine &operator=(TacticalMarine const &other);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};
