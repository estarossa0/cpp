#pragma once
#include <iostream>

class ClapTrap
{
	protected:
		std::string	type;
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
		ClapTrap();
		ClapTrap(std::string const &name);
		ClapTrap(std::string type_, int hit_points_, int max_hit_points_, int energy_points_, int max_energy_points_,
		int level_, std::string	name_, int melee_attack_damage_, int ranged_attack_damage_, int armor_damage_reduction_);
		ClapTrap(ClapTrap const &copy);
		~ClapTrap(void);

		ClapTrap		&operator=(ClapTrap const &other);

		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getName() const;
};

