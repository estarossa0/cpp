#pragma once
#include "Victim.hpp"

class Peon : public Victim
{
private:
	Peon();
public:
	Peon(std::string name);
	Peon(Peon const & other);
	Peon &operator=(Peon const &other);
	~Peon();
	virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Peon const &other);
