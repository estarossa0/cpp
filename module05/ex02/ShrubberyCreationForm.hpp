#pragma once
#include <iostream>
#include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm &other);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);
	virtual void execute(Bureaucrat const &) const;
};

std::ostream	&operator<<(std::ostream &out, ShrubberyCreationForm const &D);
