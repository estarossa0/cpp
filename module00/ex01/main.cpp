#include "phone-ing.hpp"

std::string get_mode(char mode)
{
	if (mode == NONE)
		return "NONE";
	if (mode == ADD)
		return "ADD";
	if (mode == SEARCH)
		return "SEARCH";
	return "NONE";
}


void
here_we_go(std::string &input, char &mode, contact *stack, int size)
{
	if (mode == NONE)
	{
		std::cout << "Wrong syntax\n";
		return;
	}
	if (mode == SEARCH)
	{
		int index = atoi(input.c_str());
		if (index - 1 < size && index > 0)
		{
			stack[index - 1].full_display();
			mode = NONE;
		}
		else
		{
			LOG "Index not found\n";
			mode = NONE;
		}
	}
}

int
main(void)
{
	contact stack[8];
	std::string input;
	char mode = NONE;
	int size = 0;
	std::cout << "Mode> " << get_mode(mode) + ": ";
	while (getline(std::cin, input) && !std::feof(stdin) && !std::ferror(stdin))
	{
		if (input == "add" && mode == NONE)
		{
			add(stack, mode, &size);
		}
		else if (input == "search" && mode == NONE)
		{
			list(stack, size);
			mode = SEARCH;
		}
		else if (input == "exit" && mode == NONE)
			return 0;
		else
		{
			here_we_go(input, mode, stack, size);
		}
		std::cout << "Mode> " << get_mode(mode) + ": ";
	}
}
