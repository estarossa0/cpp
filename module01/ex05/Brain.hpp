#pragma once
#include <iostream>
#include <iomanip>
class brain
{
public:
	int size;
	int wight;
	std::string identify()
	{
		std::stringstream stream;
		stream << std::hex << &size;
		return stream.str();
	}
};
