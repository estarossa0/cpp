#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(137, 145,target)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &D) : Form(137, 145, D.getName())
{
	*this = D;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &)
{
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw Form::FormExecuteFail("Form is not signed");
	if (executor.getGrade() > this->getEGrade())
		throw Form::FormExecuteFail("Bureaucrat grade are lower than form execute grade");
	std::string FName = this->getName() + "_shrubbery";
	std::ofstream	Fout(FName);
	Fout << "      /\\      \n"
"     /\\*\\     \n"
"    /\\O\\*\\    \n"
"   /*/\\/\\/\\   \n"
"  /\\O\\/\\*\\/\\  \n"
" /\\*\\/\\*\\/\\/\\ \n"
"/\\O\\/\\/*/\\/O/\\\n"
"      ||      \n"
"      ||      \n"
"      ||      \n";
}
