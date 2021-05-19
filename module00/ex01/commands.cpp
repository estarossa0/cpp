#include "phone-ing.hpp"

void	list(contact *stack, int size)
{
	int index = 1, jndex = 0;
	LOG "|";
	LOG "  index   " << "|";
	LOG "first name" << "|";
	LOG "last  name" << "|";
	LOG " nickname ";
	LOG "|";
	LOG LINE;
	while (jndex < size)
	{
		LOG "|";
		LOG index++ << "         ";
		stack[jndex].display();
		LOG "|";
		LOG LINE;
		jndex++;
	}
}

void	add(contact *stack, char mode, int *size)
{
	if (*size < 8)
	{
		stack[*size].add();
		mode = NONE;
		(*size)++;
	}
	else
	{
		std::cout << "Max number reahced.\n";
		mode = NONE;
		return;
	}
}
