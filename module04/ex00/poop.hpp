#pragma once
#include "Victim.hpp"

class poop : public Victim
{
	protected:
		poop();
	public:
		poop(std::string name);
		poop(poop const &other);
		poop &operator=(poop const &other);
		virtual ~poop();
		virtual void getPolymorphed() const;
};