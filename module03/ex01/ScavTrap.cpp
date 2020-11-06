#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name):
hit_points(100), max_hit_points(100), energy_points(50),
max_energy_points(50), level(1), name(name), melee_attack_damage(20),
ranged_attack_damage(15), armor_damage_reduction(3)
{
	std::cout << "Hey my name is " << name << " I'm new here" << std::endl;
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

void		ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SCAVTRAP " << name << " attacks " << target
	<< " at range, causing " << ranged_attack_damage << " points of damage !" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SCAVTRAP " << name << " attacks " << target
	<< " at melee, causing " << melee_attack_damage << " points of damage !" << std::endl;
}

void    ScavTrap::takeDamage(unsigned int amount)
{
	amount -= armor_damage_reduction;
	if ((int)amount <= 0)
		std::cout << name << " said: He never saw such bullshit before LOL" << std::endl;
	else
	{
		if ((int)(hit_points - amount) <= 0)
		{
			std::cout << "poor scavy " << name << " just turned off after recieving " << amount << " damage"<< std::endl;
			hit_points = 0;
		}
		else
			hit_points -= amount;
		std::cout << name << " took " << amount << " of damage. he never saw it coming. now he have "
		<< hit_points << " HP" << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	hit_points += amount;
	if (hit_points >= max_hit_points)
	{
		hit_points = max_hit_points;
		std::cout << name << " IS FULL!" << std::endl;
	}
	else
		std::cout << name << " been working out! he gained " << amount << " of health" << std::endl;
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
