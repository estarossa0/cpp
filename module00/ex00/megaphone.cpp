#include <iostream>
#include <string>

int
main(int argc , char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0;
	}
	for (size_t i = 1; argv[i] ; i++)
	{
		for (size_t j = 0; argv[i][j]; j++)
		{
			std::cout << (char)::toupper(argv[i][j]) << std::endl;
		}
	}
}
