#pragma once
#include <string>
#include <iostream>

class Zombie
{
	public:
	std::string name;
	char		type;
	void	announce()
	{
		std::cout << "<" + name + " (" + type + ")> Give me a hug...\n";
	}
};
