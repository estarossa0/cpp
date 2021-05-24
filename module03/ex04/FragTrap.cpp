#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Hey I'm FragTrap this my default constructer" << std::endl;
}

FragTrap::FragTrap(std::string const &_name)
{
	this->FragTrap::hit_points = 100;
	this->FragTrap::max_hit_points = 100;
	this->FragTrap::name = _name;
	this->FragTrap::ranged_attack_damage = 20;
	this->FragTrap::armor_damage_reduction = 5;
	std::cout << "Hey I'm FragTrap my name is " << name << " I'm new here" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	std::cout << "Oh! hey look " << src.name << " this is " << name << " YOUR TWIN!!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "poor FragTrap " << name << " stopped functioning" << std::endl;
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
	std::cout << "A FragTrap " << name << " attacks " << target
	<< " at range, causing " << ranged_attack_damage << " points of damage !" << std::endl;
}

void		FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "A FragTrap " << name << " attacks " << target
	<< " at melee, causing " << melee_attack_damage << " points of damage !" << std::endl;
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
