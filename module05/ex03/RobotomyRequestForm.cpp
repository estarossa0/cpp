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

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	static int i = 0;
	std::cout << "brrrrrrrr" << std::endl;
	if (!(i % 2))
		std::cout << executor.getName() << " has been robotomized successfully" << std::endl;
	else
		std::cout << executor.getName() << " has failed to be robotomized" << std::endl;
	i++;
}
