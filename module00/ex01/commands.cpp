#include "phone-ing.hpp"

void	list(std::vector<contact> &stack)
{
	int index = 1;
	std::vector<contact>::iterator it = stack.begin();
	LOG "|";
	LOG "  index   " << "|";
	LOG "first name" << "|";
	LOG "last  name" << "|";
	LOG " nickname ";
	LOG "|";
	LOG LINE;
	while (it != stack.end())
	{
		LOG "|";
		LOG index++ << "         ";
		it->display();
		LOG "|";
		LOG LINE;
		it ++;
	}
}

void	add(std::vector<contact> &stack, char &mode)
{
	if (stack.size() < 8)
	{
		contact ct;
		ct.add();
		stack.push_back(ct);
		mode = NONE;
	}
	else
	{
		std::cout << "Max number reahced.\n";
		mode = NONE;
		return;
	}
}
