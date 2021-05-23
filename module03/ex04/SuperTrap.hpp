#pragma once

#include <iostream>
#include <time.h>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap();
		SuperTrap(std::string const &name);
		SuperTrap(SuperTrap const &copy);
		~SuperTrap(void);

		SuperTrap		&operator=(SuperTrap const &other);
		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
};