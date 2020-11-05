#pragma once
#include "Brain.hpp"

class Human
{
	private:
		brain big_bren;
	public:
		brain &get_brain();
		std::string identify();
};
