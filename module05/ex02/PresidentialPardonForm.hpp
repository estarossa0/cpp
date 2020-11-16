#pragma once

#include <iostream>
#include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm &);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm &operator=(PresidentialPardonForm const &);
		virtual void execute(Bureaucrat const &) const;
};

std::ostream	&operator<<(std::ostream &os, PresidentialPardonForm const &);
