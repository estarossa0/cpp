#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
	ScavTrap();
    ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const & src);
    ~ScavTrap(void);

	ScavTrap &	operator=(ScavTrap const &);
	void	challengeNewcomer();
};
