#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		_save[i] = nullptr;
	}
}

MateriaSource::~MateriaSource()
{}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	*this = other;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	for (size_t i = 0; i < 4; i++)
	{
		delete this->_save[i];
	}
	for (size_t i = 0; i < 4; i++)
	{
		if (other._save[i])
			this->_save[i] = other._save[i]->clone();
	}
}

void	MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;
	while (i < 4)
	{
		if (this->_save[i] == nullptr)
		{
			this->_save[i] = m;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_save[i] && type == this->_save[i]->getType())
			return (this->_save[i]->clone());
	}
	return (NULL);
}
