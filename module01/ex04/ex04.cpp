#include "iostream"


int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *p_string ;
	p_string = &string;
	std::cout << "Pointer: " + *p_string << std::endl;
	std::cout << "Reference: " + string << std::endl;
}
