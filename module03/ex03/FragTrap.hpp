#pragma once

#include <iostream>
#include <time.h>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &copy);
		~FragTrap(void);

		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		FragTrap		&operator=(FragTrap const &other);
		void			vaulthunter_dot_exe(std::string const &target);
};
