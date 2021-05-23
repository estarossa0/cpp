#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Hey I'm FragTrap this my default constructer" << std::endl;
}

FragTrap::FragTrap(std::string const &name):
hit_points(100), max_hit_points(100), energy_points(100),
max_energy_points(100), level(1), name(name), melee_attack_damage(30),
ranged_attack_damage(20), armor_damage_reduction(5)
{
	std::cout << "Hey my name is " << name << " I'm new here" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	std::cout << "Oh! hey look " << src.name << " this is " << name << " YOUR TWIN!!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "poor " << name << " stopped functioning" << std::endl;
}

FragTrap &  FragTrap::operator=(FragTrap const & other)
{
	hit_points = other.hit_points;
	max_hit_points = other.max_hit_points;
	energy_points = other.energy_points;
	max_energy_points = other.max_energy_points;
	level = other.level;
	name = other.name;
	melee_attack_damage = other.melee_attack_damage;
	ranged_attack_damage = other.ranged_attack_damage;
	armor_damage_reduction = other.armor_damage_reduction;
	std::cout << "<cp " << name + " " + other.name + "> ENTER"<< std::endl;
	return (*this);
}

void		FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target
	<< " at range, causing " << ranged_attack_damage << " points of damage !" << std::endl;
}

void		FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target
	<< " at melee, causing " << melee_attack_damage << " points of damage !" << std::endl;
}

void    FragTrap::takeDamage(unsigned int amount)
{
	amount -= armor_damage_reduction;
	if ((int)amount <= 0)
		std::cout << name << " said: Know your place TRASH!" << std::endl;
	else
	{
		if ((int)(hit_points - amount) <= 0)
		{
			std::cout << "looks like " << name << " just turned off after recieving " << amount << " damage"<< std::endl;
			hit_points = 0;
		}
		else
			hit_points -= amount;
		std::cout << name << " take damage at " << amount << ". Now he has "
		<< hit_points << " HP" << std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	hit_points += amount;
	if (hit_points >= max_hit_points)
	{
		hit_points = max_hit_points;
		std::cout << name << " just been born again!" << std::endl;
	}
	else
		std::cout << name << " gained " << amount << " of health" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target) {

	static std::string		random_attack[] = {"Clap-In-The-Box", "Gun Wizard",
	"Torgue Fiesta", "Pirate Ship Mode", "One Shot Wonde", "Laser Inferno", "Miniontrap", "Meat Unicycle"};
	static int save = 0;

	if (!save)
	{
		srand(time(0));
		save = 1;
	}
	if (energy_points >= 25)
	{
		energy_points -= 25;
		std::cout << "FR4G-TP " << name << " attack " << target << " uses " << random_attack[(rand() % 8)] << std::endl;
	}
	else
		std::cout << "FR4G-TP " << name << " has no energy" << std::endl;
}
