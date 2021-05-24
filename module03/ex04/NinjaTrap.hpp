#pragma once

#include <iostream>
#include <time.h>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string const &name);
		NinjaTrap(NinjaTrap const &copy);
		~NinjaTrap(void);

		NinjaTrap		&operator=(NinjaTrap const &other);

		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void ninjaShoebox(FragTrap const &other) const;
		void ninjaShoebox(ScavTrap const &other) const;
		void ninjaShoebox(ClapTrap const &other) const;
		void ninjaShoebox(NinjaTrap const &other) const;
};
