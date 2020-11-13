#include "Squad.hpp"

Squad::Squad() : count(0), units(nullptr)
{
}

Squad::Squad(Squad const &other)
{
		*this = other;
}

Squad &Squad::operator=(Squad const &other)
{
	if (this != &other)
	{
		for (int i = 0; i < count; i++)
			delete units[i];
		count = other.getCount();
		units = new ISpaceMarine*[count];
		for (int i = 0; i < count; i++)
			units[i] = other.getUnit(i);
	}
	return (*this);
}

Squad::~Squad()
{
	for (int i = 0; i < count; i++)
	{
		delete	units[i];
	}
	delete[] units;
}
int Squad::getCount() const
{
	return (count);
}

ISpaceMarine *Squad::getUnit(int n) const
{
	if (n >= 0 && n < count)
	{
		return (units[n]);
	}
	return (nullptr);
}
int Squad::push(ISpaceMarine* item)
{
	ISpaceMarine **new_tab;
	if (!item)
		return (this->count);
	for (int i = 0; i < this->count; i++)
	{
		if (item == units[i])
			return (this->count);
	}
	new_tab = new ISpaceMarine*[count + 1];
	for (int i = 0; i < this->count; i++)
	{
		new_tab[i] = units[i];
	}
	new_tab[this->count] = item;
	new_tab[++(this->count)] = nullptr;
	delete [] units;
	units = new_tab;
	return (this->count);
}
