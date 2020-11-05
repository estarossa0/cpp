#include "Brain.hpp"
std::string brain::identify()
{
	std::stringstream str;
	str << std::hex << &size;
	return str.str();
}
