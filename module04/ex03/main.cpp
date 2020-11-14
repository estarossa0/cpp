#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp1;
	AMateria* tmp2;
	tmp1 = src->createMateria("ice");
	std::cout << tmp1->getXP() << std::endl;
	me->equip(tmp1);
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	std::cout << tmp1->getXP() << std::endl;
	me->use(1, *bob);
	std::cout << tmp2->getXP() << std::endl;
	me->use(1, *bob);
	me->use(1, *bob);
	me->use(3, *bob);
	me->use(4, *bob);
	me->use(5, *bob);
	std::cout << tmp2->getXP() << std::endl;
	me->unequip(1);
	me->use(1, *bob);
	std::cout << tmp2->getXP() << std::endl;
	delete bob;
	delete me;
	delete src;
	return 0;
}
