
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

#include <iostream>

int main(void)
{
	std::cout << "\033[1;31m";
	std::cout << "TEST FRAGTRAP\n";
	std::cout << "\033[0m";
	FragTrap fragy("fragy");
	FragTrap fragy2;
	fragy.meleeAttack("human");
	fragy.rangedAttack("pelikan");
	fragy.beRepaired(20);
	fragy.takeDamage(40);
	fragy.beRepaired(20);
	fragy.takeDamage(100);
	fragy.takeDamage(20);
	fragy.beRepaired(100);
	fragy.takeDamage(20);
	fragy2 = fragy;
	FragTrap r2(fragy);
	fragy.vaulthunter_dot_exe("guy");
	fragy.vaulthunter_dot_exe("guy");
	fragy.vaulthunter_dot_exe("guy");
	fragy.vaulthunter_dot_exe("guy");
	std::cout << "\033[1;31m";
	std::cout << "TEST SCAVTRAP\n";
	std::cout << "\033[0m";
	ScavTrap scavy("scavy");
	scavy.meleeAttack("human");
	scavy.rangedAttack("pelikan");
	scavy.beRepaired(20);
	scavy.takeDamage(40);
	scavy.beRepaired(20);
	scavy.takeDamage(100);
	scavy.takeDamage(20);
	scavy.beRepaired(100);
	scavy.takeDamage(20);
	ScavTrap scavy2(scavy);
	scavy.challengeNewcomer();
	scavy.challengeNewcomer();
	scavy.challengeNewcomer();
	scavy.challengeNewcomer();
	std::cout << "\033[1;31m";
	std::cout << "TEST NINJATRAP\n";
	std::cout << "\033[0m";

	ClapTrap clap("clap");

	NinjaTrap ninja("ninja");
	ninja.ninjaShoebox(fragy);
	ninja.ninjaShoebox(scavy);
	ninja.ninjaShoebox(clap);
	ninja.ninjaShoebox(ninja);
	return (0);
}
