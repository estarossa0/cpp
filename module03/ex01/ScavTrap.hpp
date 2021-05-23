#pragma once

#include <iostream>

class ScavTrap {

private:
	int		hit_points;
	int		max_hit_points;
	int		energy_points;
	int		max_energy_points;
	int		level;
	std::string	name;
	int		melee_attack_damage;
	int		ranged_attack_damage;
	int		armor_damage_reduction;

public:
	ScavTrap();
    ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const & src);
    ~ScavTrap(void);

	ScavTrap &	operator=(ScavTrap const &);
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer();
};
