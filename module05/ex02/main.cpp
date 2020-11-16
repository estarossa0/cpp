#include "Bureaucrat.hpp"
void test1()
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
