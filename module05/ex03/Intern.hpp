#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

class Form;

class	Intern
{
	public:
		Intern();
		Intern(Intern &);
		virtual ~Intern();
		Intern &operator=(Intern const &);
		Form *makePresidentialPardonForm(std::string const &string);
		Form *makeShrubberyCreationForm(std::string const &string);
		Form *makeRobotomyRequestForm(std::string const &string);
		Form *makeForm(std::string form, std::string target);
};
