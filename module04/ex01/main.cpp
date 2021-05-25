#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PoopGun.hpp"
#include "PoopMonster.hpp"

int main()
{
	Character *character = new Character("Henry");
	Enemy *superMutant = new SuperMutant;
	Enemy *radScorpion = new RadScorpion;
	Enemy *poopmonster = new PoopMonster;
	std::cout << "----------" << std::endl;

	AWeapon *powerFist = new PowerFist;
	AWeapon *poopgun = new PoopGun;
	character->equip(powerFist);
	character->attack(superMutant);
	character->attack(radScorpion);
	character->attack(poopmonster);

	std::cout << "----------" << std::endl;

	character->equip(poopgun);
	character->attack(superMutant);
	character->attack(superMutant);

	std::cout << "----------" << std::endl;

	character->recoverAP();
	character->recoverAP();
	character->recoverAP();
	character->recoverAP();
	character->recoverAP();
	character->recoverAP();
	character->recoverAP();


	std::cout << "----------" << std::endl;

	delete powerFist;
	delete radScorpion;
	delete character;
	delete poopmonster;
	delete poopgun;
	// delete superMutant;

	return 0;
}
