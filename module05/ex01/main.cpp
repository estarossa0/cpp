#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Form form(1, 0, "forum");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form form(151, 1, "forum");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Form form(40, 40, "sform");
	std::cout << form;
	Bureaucrat bur(4, "bur");
	try
	{
		form.beSigned(bur);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << form;
	Form form2(40, 40, "sform");
	Bureaucrat fail(60, "failure");
	try
	{
		form2.beSigned(fail);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
