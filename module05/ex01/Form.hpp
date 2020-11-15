#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Form
{
	private:
		const int grade;
		const std::string name;
		bool is_signed;
		const int sgrade;
		Form();
	public:
		Form(std::string name, int sgrade, int grade);
		Form(Form const &other);
		virtual ~Form();
		Form& operator=(Form const &other) throw();
		const std::string &getName() const;
		int getGrade() const;
		bool getSigned() const;
		int getSGrade() const;
		void beSigned(Bureaucrat &);
		void signForm();
	class	GradeTooHighException : public std::exception
	{
	private:
		std::string	const _error;
	public:
		GradeTooHighException();
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
		virtual ~GradeTooLowException() throw();
		GradeTooLowException(GradeTooLowException const &other);
		GradeTooLowException &operator=(GradeTooLowException const &other);
		
		virtual const char *what() const throw();
	};
};

std::ostream & operator<<(std::ostream &os, Form const &D);
