#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	std::cout << "Hey I'm SuperTrap this my default constructer" << std::endl;
}

SuperTrap::SuperTrap(std::string const &_name): FragTrap(_name), NinjaTrap(_name)
{
	std::cout << "Hey my name is " << name << " I'm new here" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & src)
{
	*this = src;
	std::cout << "Oh! hey look " << src.FragTrap::name << " this is " << FragTrap::name << " YOUR TWIN!!" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "poor " << this->FragTrap::name << " died" << std::endl;
}

SuperTrap &  SuperTrap::operator=(SuperTrap const & other)
{
	this->hit_points = other.hit_points;
	this->max_hit_points = other.max_hit_points;
	this->energy_points = other.energy_points;
	this->max_energy_points = other.max_energy_points;
	this->level = other.level;
	this->name = other.name;
	this->melee_attack_damage = other.melee_attack_damage;
	this->ranged_attack_damage = other.ranged_attack_damage;
	this->armor_damage_reduction = other.armor_damage_reduction;
	std::cout << "<cp " << name + " " + other.name + "> ENTER"<< std::endl;
	return (*this);
}

void		SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void		SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}