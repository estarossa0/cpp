#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(45, 72, target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &D) : Form(45, 72, D.getName())
{
	*this = D;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm &RobotomyRequestForm::operator = (RobotomyRequestForm const &)
{
	return (*this);
}
