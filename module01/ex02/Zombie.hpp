#pragma once
#include <string>
#include <iostream>

class Zombie
{
	public:
	std::string name;
	char		type;
	Zombie(std::string name);
	~Zombie();
	void	announce();
};
