#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bur(0, "test 1");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat bur(151, "test 2");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Bureaucrat bur(1, "test3");
	std::cout << bur;
	try
	{
		bur.gradInc();
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		bur.gradDec();
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
