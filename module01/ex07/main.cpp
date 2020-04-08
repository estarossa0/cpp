#include <iostream>
#include "replace.h"

void	check_error(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Missing arguments.\n";
		exit(1);
	}
	else if (strlen(argv[2]) == 0 || strlen(argv[3]) == 0)
	{
		std::cout << "Empty strings are given.\n";
		exit(1);
	}
}

int main(int argc, char **argv)
{
	check_error(argc, argv);
	t_data data(argv);

	replace(&data);
}
