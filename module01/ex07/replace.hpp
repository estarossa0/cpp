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
	s_data(char **argv);
	~s_data();
}				t_data;

//PROTOTYPES
void	replace(t_data *data);
