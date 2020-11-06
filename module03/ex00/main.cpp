#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
	FragTrap r1("Idiot");
	r1.meleeAttack("human");
	r1.rangedAttack("pelikan");
	r1.beRepaired(20);
	r1.takeDamage(40);
	r1.beRepaired(20);
	r1.takeDamage(100);
	r1.takeDamage(20);
	r1.beRepaired(100);
	r1.takeDamage(20);
	FragTrap r2(r1);
	r1.vaulthunter_dot_exe("guy");
	r1.vaulthunter_dot_exe("guy");
	r1.vaulthunter_dot_exe("guy");
	r1.vaulthunter_dot_exe("guy");
	return (0);
}
