
#include "ScavTrap.hpp"
ScavTrap::ScavTrap()
{
	std::cout << "Hey I'm ScavTrap this my default constructer" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name): ClapTrap("ScavTrap", 100, 100, 50, 50, 1, name, 20, 15, 3)
{
	std::cout << "Hey I'm ClapTrap my name is " << name << " I'm new here" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
	std::cout << "Hey! scavy " << src.name << " this is another scavy " << name << " YOUR TWIN!!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "poor " << name << " his bit turned to 0" << std::endl;
}

ScavTrap &  ScavTrap::operator=(ScavTrap const & other)
{
	hit_points = other.hit_points;
	max_hit_points = other.hit_points;
	energy_points = other.energy_points;
	max_energy_points = other.max_energy_points;
	level = other.level;
	name = other.name;
	melee_attack_damage = other.melee_attack_damage;
	ranged_attack_damage = other.ranged_attack_damage;
	armor_damage_reduction = other.armor_damage_reduction;
	std::cout << "copying " << name + " into " + other.name + "... DONE"<< std::endl;
	return (*this);
}

void	ScavTrap::challengeNewcomer()
{
	static std::string		random_challenge[] = {"find the engine oil he lost", " a speed run",
	"see who will hold breath longer", "get a life", " translate this binary code", " stand on one wheel", "get a life",
	"sword fight"};
	static int save = 0;

	if (!save)
	{
		srand(time(0));
		save = 1;
	}
	if (energy_points >= 25)
	{
		energy_points -= 25;
		std::cout << "ScavTrap " << name << " has challange you to " << random_challenge[(rand() % 8)] << std::endl;
	}
	else
		std::cout << "ScavTrap " << name << " has no energy" << std::endl;
}
