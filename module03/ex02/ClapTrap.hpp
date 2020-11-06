#pragma once
#include <iostream>

class ClapTrap
{
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
		ClapTrap(std::string const &name);
		ClapTrap(ClapTrap const &copy);
		~ClapTrap(void);

		ClapTrap		&operator=(ClapTrap const &other);

		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

