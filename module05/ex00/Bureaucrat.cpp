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

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string err) : _error(err)
{}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() 
{}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &other)
{
	*this = other;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &)
{
	return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return _error.c_str();
}

Bureaucrat::GradeTooLowException::GradeTooLowException() : _error("Grade got too low.")
{}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string err) : _error(err)
{}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &other)
{
	*this = other;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &)
{
	return (*this);
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return _error.c_str();
}

std::ostream & operator << (std::ostream &out, Bureaucrat const &D)
{
	return out << D.getName() << ", bureaucrat grade " << D.getGrade() << std::endl;;
}
