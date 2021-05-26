#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(int grade, std::string name) : _grade(grade), _name(name)
{
	if (_grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (_grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	this->_grade = other.getGrade();
	return *this;
}
std::string const &Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::gradInc()
{
	_grade -= 1;
	if (_grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
}

void Bureaucrat::gradDec()
{
	_grade += 1;
	if (_grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat::GradeTooHighException::GradeTooHighException() : _error("Grade got too high.")
{}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return _error.c_str();
}

Bureaucrat::GradeTooLowException::GradeTooLowException() : _error("Grade got too low.")
{}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return _error.c_str();
}

std::ostream & operator << (std::ostream &out, Bureaucrat const &D)
{
	return out << D.getName() << ", bureaucrat grade " << D.getGrade() << std::endl;;
}

void Bureaucrat::signForm(Form const &form)
{
	if (form.getSigned())
	{
		std::cout << this->_name + " sign " + form.getName() << std::endl;
	}
	else
	{
		std::cout << this->_name + " cannot sign " + form.getName() + " because Grade is lower than sign grade" << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const &form) const
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executes " << form.getName() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << _name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
	}
}