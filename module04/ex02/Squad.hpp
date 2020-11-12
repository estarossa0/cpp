#pragma once
#include "ISquad.hpp"

class Squad : public ISquad
{
private:
	int		count;
	ISpaceMarine **units;
public:
	Squad();
	Squad(Squad const &other);
	Squad &operator=(Squad const &other);

	virtual ~Squad();
	int getCount() const;
	ISpaceMarine* getUnit(int) const;
	int push(ISpaceMarine*);
};	
