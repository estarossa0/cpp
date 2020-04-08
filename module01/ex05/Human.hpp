#pragma once
#include "Brain.hpp"

class Human
{
public:
	brain big_bren;
	brain &get_brain()
	{
		return big_bren;
	};

	std::string identify()
	{
		return big_bren.identify();
	}
};
