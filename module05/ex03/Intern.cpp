#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(Intern &D)
{
	*this = D;
}

Intern::~Intern()
{}

Intern& Intern::operator = (Intern const &)
{
	return *this;
}

Form *Intern::makeForm(std::string form, std::string target)
{
	Form *(Intern::*ptr[3])(std::string const &) = {&Intern::makePresidentialPardonForm,
	&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm};
	std::string funcs[3] = {"presidential pardon", "shrubbery creation", "robotomy request"};
	for (size_t i = 0; i < 3; i++)
	{
		if (funcs[i] == form)
		{
			std::cout << "Intern creates " << form << std::endl;
			return (this->*(ptr[i]))(target);
		}
	}
	std::cout << "Unknown form type " << form << std::endl;
	return (NULL);
}

Form *Intern::makePresidentialPardonForm(std::string const &target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::makeShrubberyCreationForm(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeRobotomyRequestForm(std::string const &target)
{
	return new RobotomyRequestForm(target);
}
