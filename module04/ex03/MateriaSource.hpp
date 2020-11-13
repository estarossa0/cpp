#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*_save[4];
public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(MateriaSource const &other);
	MateriaSource &operator = (MateriaSource const &other);
	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};
