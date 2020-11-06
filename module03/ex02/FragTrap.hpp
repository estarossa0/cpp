#pragma once

#include <iostream>
#include <time.h>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &copy);
		~FragTrap(void);

		FragTrap		&operator=(FragTrap const &other);
		void			vaulthunter_dot_exe(std::string const &target);
};
