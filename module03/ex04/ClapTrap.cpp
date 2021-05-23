#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &name) : name(name)
{
	std::cout << "Hey I'm ClapTrap my name is " << name << " I'm new here" << std::endl;
}

ClapTrap::ClapTrap()
{
	std::cout << "Hey ClapTrap is here" << std::endl;
}

ClapTrap::ClapTrap(std::string type_, int hit_points_, int max_hit_points_, int energy_points_, int max_energy_points_,
int level_, std::string	name_, int melee_attack_damage_, int ranged_attack_damage_, int armor_damage_reduction_):

type(type_), hit_points(hit_points_), max_hit_points(max_hit_points_), energy_points(energy_points_),
max_energy_points(max_energy_points_), level(level_), name(name_), melee_attack_damage(melee_attack_damage_),
ranged_attack_damage(ranged_attack_damage_), armor_damage_reduction(armor_damage_reduction_)
{
	std::cout << "Hey I'm ClapTrap my name is " << name << " I'm new here" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
	std::cout << "Oh! hey look ClapTrap " << src.name << " this is " << name << " YOUR TWIN!!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "poor ClapTrap " << name << " stopped functioning" << std::endl;
}

ClapTrap &  ClapTrap::operator=(ClapTrap const & other)
{
	hit_points = other.hit_points;
	max_hit_points = other.hit_points;
	level = other.level;
	name = other.name;
	std::cout << "<cp " << name + " " + other.name + "> ENTER"<< std::endl;
	return (*this);
}

void		ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "A " + type + " " << name << " attacks " << target
	<< " at range, causing " << ranged_attack_damage << " points of damage !" << std::endl;
}

void		ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "A " + type + " " << name << " attacks " << target
	<< " at melee, causing " << melee_attack_damage << " points of damage !" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
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

void	ClapTrap::beRepaired(unsigned int amount)
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

std::string ClapTrap::getName() const
{
	return (this->name);
}
