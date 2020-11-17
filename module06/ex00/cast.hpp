#pragma once

#include <iostream>
#define CINT 1
#define CDOUBLE 2
#define CFLOAT 3
#define	CCHAR 4

class	Cast
{
private:
	const std::string OString;
	int type;
	Cast();
public:
	Cast(std::string const &str, int type);
	virtual ~Cast();
	Cast(Cast const &other);
	Cast &operator=(Cast const &other);
	std::string const &getOSring() const;

	operator int();
	operator double();
	operator float();
	operator char();

	class	UnvalidCast : public std::exception
	{
	private:
		std::string	const _error;
	public:
		UnvalidCast();
		UnvalidCast(std::string err);
		virtual ~UnvalidCast() throw();
		UnvalidCast(UnvalidCast const &other);
		UnvalidCast &operator=(UnvalidCast const &other);

		virtual const char *what() const throw();
	};
	
};
