#include "Form.hpp"
#include <ostream>
Form::Form() : _egrade(1), _name(""), _is_signed(false), _sgrade(1)
{}

Form::Form(int grade, int sgrade, std::string name)
: _egrade(grade), _name(name), _is_signed(false), _sgrade(sgrade)
{
	if (_egrade > 150)
		throw Form::GradeTooLowException("EGrade too low");
	if (_egrade < 1)
		throw Form::GradeTooHighException("EGrade too high");
	if (_sgrade > 150)
		throw Form::GradeTooLowException("SGrade too low");
	if ( _sgrade < 1)
		throw Form::GradeTooHighException("SGrade too high");
}

Form::Form(Form const &other)  : _egrade(other._egrade), _name(other._name), _is_signed(other._is_signed), _sgrade(other._sgrade)
{
	*this = other;
}

Form::~Form()
{}

Form &Form::operator=(Form const &other)
{
	this->_is_signed = other._is_signed;
	return (*this);
}

const std::string &Form::getName() const
{
	return (this->_name);
}

int Form::getEGrade() const
{
	return this->_egrade;
}

bool Form::getSigned() const
{
	return (this->_is_signed);
}

int Form::getSGrade() const
{
	return (this->_sgrade);
}

void Form::beSigned(Bureaucrat &src)
{
	if (src.getGrade() <= this->_sgrade)
	{
		this->_is_signed = true;
		src.signForm(*this);
	}
	else
	{
		src.signForm(*this);
		throw Form::GradeTooLowException("Form failed to get signed");
	}
}

Form::GradeTooHighException::GradeTooHighException() : _error("Form grade got too high.")
{}

Form::GradeTooHighException::GradeTooHighException(std::string err) : _error(err)
{}

Form::GradeTooHighException::~GradeTooHighException() throw()
{}

const char *Form::GradeTooHighException::what() const throw()
{
	return _error.c_str();
}

Form::GradeTooLowException::GradeTooLowException() : _error("Form grade got too low.")
{}

Form::GradeTooLowException::GradeTooLowException(std::string err) : _error(err)
{}

Form::GradeTooLowException::~GradeTooLowException() throw()
{}

const char *Form::GradeTooLowException::what() const throw()
{
	return _error.c_str();
}

Form::FormExecuteFail::FormExecuteFail() : _error("Execting a form failed")
{}

Form::FormExecuteFail::FormExecuteFail(std::string err) : _error(err)
{}

Form::FormExecuteFail::~FormExecuteFail() throw()
{}

const char *Form::FormExecuteFail::what() const throw()
{
	return _error.c_str();
}


std::ostream & operator << (std::ostream &out, Form const &D)
{
	out << D.getName() << ", form sign grade " << D.getSGrade()
	<< " execute grade " << D.getEGrade();
	if (D.getSigned())
		out << ", is signed\n";
	else
		out << ", is not signed\n";
	return (out);
}
