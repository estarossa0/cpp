#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
		{
			Bureaucrat				bob(4, "Robert");


			RobotomyRequestForm		rr("Henry");
			rr.beSigned(bob);
			rr.execute(bob);

			ShrubberyCreationForm	sc("me");
			sc.beSigned(bob);
			sc.execute(bob);

			PresidentialPardonForm	pp("Larry");
			pp.beSigned(bob);
			pp.execute(bob);

			bob.executeForm(pp);

			bob.executeForm(rr);

			bob.executeForm(sc);
		}
		catch (std::exception& e) {

			std::cerr << "Error : " << e.what() << std::endl;
		}
}
