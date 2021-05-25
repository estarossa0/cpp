#pragma once
#include <iostream>

class Victim
{
	protected:
	Victim();
	std::string m_name;
	public:
	Victim(std::string name);
	Victim(Victim const &other);
	Victim &operator=(Victim const &other);
	virtual ~Victim();
	std::string getName() const;

	virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Victim const &other);
