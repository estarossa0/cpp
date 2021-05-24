	#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	std::cout << "Hey I'm NinjaTrap this my default constructer" << std::endl;
}

NinjaTrap::NinjaTrap(std::string const &_name)
{
	this->NinjaTrap::hit_points = 60;
	this->NinjaTrap::max_hit_points = 60;
	this->NinjaTrap::energy_points = 120;
	this->NinjaTrap::max_energy_points = 120;
	this->NinjaTrap::level = 1;
	this->NinjaTrap::name = _name;
	this->NinjaTrap::melee_attack_damage = 60;
	this->NinjaTrap::ranged_attack_damage = 5;
	this->NinjaTrap::armor_damage_reduction = 0;
	std::cout << "Hey I'm NinjaTrap my name is " << name << " I'm new here" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src)
{
	*this = src;
	std::cout << "Oh! hey look " << src.name << " this is " << name << " YOUR TWIN!!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "poor NinjaTrap " << name << " stopped functioning" << std::endl;
}

void		NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "A NinjaTrap " << name << " attacks " << target
	<< " at range, causing " << ranged_attack_damage << " points of damage !" << std::endl;
}

void		NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "A NinjaTrap " << name << " attacks " << target
	<< " at melee, causing " << melee_attack_damage << " points of damage !" << std::endl;
}

NinjaTrap &  NinjaTrap::operator=(NinjaTrap const & other)
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

void NinjaTrap::ninjaShoebox(ClapTrap const &other) const
{
	std::cout << "Ninja made a new ClapTrap friend " << other.getName() << "\n";
}

void NinjaTrap::ninjaShoebox(FragTrap const &other) const
{
	std::cout << "Ninja made a new FragTrap friend " << other.getName() << "\n";
}

void NinjaTrap::ninjaShoebox(ScavTrap const &other) const
{
	std::cout << "Ninja made a new ScavTrap friend " << other.getName() << "\n";
}

void NinjaTrap::ninjaShoebox(NinjaTrap const &other) const
{
	std::cout << "Ninja made a new NinjaTrap friend " << other.getName() << "\n";
}
