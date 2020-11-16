#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(5, 25, target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &D) : Form(5, 25, D.getName())
{
	*this = D;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm &PresidentialPardonForm::operator = (PresidentialPardonForm const &)
{
	return (*this);
}
