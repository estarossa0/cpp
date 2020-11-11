#pragma once

#include <iostream>
#include "Victim.hpp"
class Sorcerer
{
	private:
	std::string	m_name;
	std::string	m_title;
	Sorcerer();
	public:
	Sorcerer(std::string name, std::string title);
	~Sorcerer();
	Sorcerer(Sorcerer const &other);
	Sorcerer &operator=(Sorcerer const &other);
	std::string getName() const;
	std::string getTitle() const;

	void polymorph(Victim const &) const;
};

std::ostream& operator << (std::ostream &out, Sorcerer const &value);
