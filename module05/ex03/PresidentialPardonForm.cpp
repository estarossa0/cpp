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
	if (!this->getSigned())
		throw Form::FormExecuteFail("Form is not signed");
	if (executor.getGrade() > this->getEGrade())
		throw Form::FormExecuteFail("Bureaucrat grade are lower than form execute grade");
	std::cout << executor.getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
