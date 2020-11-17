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

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << executor.getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
