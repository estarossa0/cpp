#include "iostream"


int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *p_string= &string;
	std::string &r_string = string;
	std::cout << "Pointer: " + *p_string << std::endl;
	std::cout << "Reference: " + r_string << std::endl;
}
