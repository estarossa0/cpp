#include "phone-ing.hpp"

void	list(std::vector<contact> &stack)
{
	int index = 1;
	LOG "|";
	LOG "  index   " << "|";
	LOG "first name" << "|";
	LOG "last  name" << "|";
	LOG " nickname ";
	LOG "|";
	LOG LINE;
	for (contact curr : stack)
	{
		LOG "|";
		LOG index++ << "         ";
		curr.display();
		LOG "|";
		LOG LINE;
	}
}

void	add(std::vector<contact> &stack)
{
	if (stack.size() < 8)
	{
		contact ct;
		ct.add();
		stack.push_back(ct);
	}
	else
	{
		std::cout << "Max number reahced.\n";
		return;
	}
}
