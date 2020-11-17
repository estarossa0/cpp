#pragma once

#include <iostream>
#include "Form.hpp"
class Form;

class Bureaucrat
{
private:
	int	_grade;
	const std::string _name;
	Bureaucrat();
public:
	Bureaucrat(int grade, std::string name);
	virtual ~Bureaucrat();
	Bureaucrat(Bureaucrat const &other);
	Bureaucrat &operator=(Bureaucrat const &other);

	std::string const &getName() const;
	int	getGrade() const;
	void	gradInc();
	void	gradDec();
	void signForm(Form const &form, std::string const &reason);

	class	GradeTooHighException : public std::exception
	{
	private:
		std::string	const _error;
	public:
		GradeTooHighException();
		GradeTooHighException(std::string err);
		virtual ~GradeTooHighException() throw();
		GradeTooHighException(GradeTooHighException const &other);
		GradeTooHighException &operator=(GradeTooHighException const &other);
		
		virtual const char *what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
	private:
		std::string	const _error;
	public:
		GradeTooLowException();
		GradeTooLowException(std::string err);
		virtual ~GradeTooLowException() throw();
		GradeTooLowException(GradeTooLowException const &other);
		GradeTooLowException &operator=(GradeTooLowException const &other);
		
		virtual const char *what() const throw();
	};
};

std::ostream & operator<<(std::ostream &os, Bureaucrat const &);
