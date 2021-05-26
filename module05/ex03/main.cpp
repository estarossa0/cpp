#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat	bob(1, "Robert");
	Intern		someRandomIntern;
	Form*		form;

	try
	{
		form = someRandomIntern.makeForm("presidential pardon", "Joe Mama");
		if (form != NULL) {
			form->beSigned(bob);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------" << std::endl;
	try
	{
		form = someRandomIntern.makeForm("whatever", "name");
		if (form != NULL) {
			bob.executeForm(*form);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
