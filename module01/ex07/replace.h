#include <iostream>
#include <string>
#include <string.h>
#include <fstream>


// CLASS
typedef	class	s_data
{
public:
	std::string	s1;
	std::string	s2;
	std::ifstream in;
	std::ofstream out;
	s_data(char **argv)
	{
		in.open(argv[1]);
		if (!in.is_open())
		{
			std::cout << std::string(argv[1]) + " ";
			std::cout << strerror(errno) << std::endl;
			exit(errno);
		}
		out.open(std::string(argv[1]) + ".replace");
		if (!out.is_open())
		{
			std::cout << strerror(errno) << std::endl;
			exit(errno);
		}
		s1 = argv[2];
		s2 = argv[3];
	}
}				t_data;

//PROTOTYPES
void	replace(t_data *data);
