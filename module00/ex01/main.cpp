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
here_we_go(std::string &input, char &mode, std::vector<contact> &stack)
{
	if (mode == NONE)
	{
		std::cout << "Wrong syntax\n";
		return;
	}
	if (mode == SEARCH)
	{
		int index = atoi(input.c_str());
		if (index - 1 < stack.size() && index > 0)
		{
			stack[index - 1].full_display();
		}
		else
		{
			LOG "Index not found\n";
		}
	}
}

int
main(void)
{
	std::vector<contact> stack;
	std::string input;
	char mode = NONE;
	std::cout << "Mode> " << get_mode(mode) + ": ";
	while (getline(std::cin, input) && !std::feof(stdin) && !std::ferror(stdin))
	{
		if (input == "add" && mode == NONE)
		{
			add(stack);
		}
		else if (input == "search" && mode == NONE)
		{
			list(stack);
			mode = SEARCH;
		}
		else if (input == "exit" && mode == NONE)
			return 0;
		else if (input == "exit" && mode != NONE)
			mode = NONE;
		else
		{
			here_we_go(input, mode, stack);
		}
		std::cout << "Mode> " << get_mode(mode) + ": ";
	}
}
