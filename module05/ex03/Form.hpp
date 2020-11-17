#pragma once

#include "Bureaucrat.hpp"
#include <fstream>
class Bureaucrat;

class Form
{
	private:
		const int _egrade;
		const std::string _name;
		bool _is_signed;
		const int _sgrade;
		Form();
	public:
		Form(int egrade, int sgrade, std::string name);
		Form(Form const &other);
		virtual ~Form();
		Form& operator=(Form const &other);
		const std::string &getName() const;
		int getEGrade() const;
		bool getSigned() const;
		int getSGrade() const;
		void beSigned(Bureaucrat &);
		void executeForm(Form const & form);
		virtual void execute(Bureaucrat const &executor) const = 0;

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

	class	FormExecuteFail : public std::exception
	{
	private:
		std::string	const _error;
	public:
		FormExecuteFail();
		FormExecuteFail(std::string err);
		virtual ~FormExecuteFail() throw();
		FormExecuteFail(FormExecuteFail const &other);
		FormExecuteFail &operator=(FormExecuteFail const &other);

		virtual const char *what() const throw();
	};
};

std::ostream & operator<<(std::ostream &os, Form const &other);
