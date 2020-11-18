#include "cast.hpp"

Cast::Cast() {}

Cast::~Cast() {}

Cast::Cast(std::string const &str, int type) : OString(str), type(type)
{}

Cast::Cast(Cast const &other) : OString(other.getOSring())
{
	*this = other;
}

Cast &Cast::operator=(Cast const &other)
{
	this->type = other.type;
	return (*this);
}

Cast::operator int()
{
	int tmp = 0;
	if (this->type == CCHAR)
		tmp = static_cast<int>(this->OString[0]);
	else
	{
		try
		{
			tmp = std::stoi(this->OString);
		}
		catch (const std::exception &D)
		{
			throw (Cast::UnvalidCast());
		}
	}
	return (tmp);
}

Cast::operator char()
{
	int tmp = 0;
	if (this->type == CCHAR)
		return this->OString[0];
	else
	{
		try
		{
			tmp = std::stoi(this->OString);
			if (tmp < -128 || tmp > 127)
				throw Cast::UnvalidCast();
		}
		catch(const std::exception& e)
		{
			throw Cast::UnvalidCast();
		}
		if (std::isprint(tmp))
			return static_cast<char> (tmp);
		else
			throw Cast::UnvalidCast("Non displayable");
	}
}

Cast::operator double()
{
	double tmp;
	if (this->type == CCHAR)
		tmp = static_cast<double>(this->OString[0]);
	else
	{
		try
		{
			tmp = std::stod(this->OString);
		}
		catch(const std::exception& e)
		{
			throw Cast::UnvalidCast("Impossible!");
		}
	}
	return tmp;
}

Cast::operator float()
{
	float tmp;
	if (this->type == CCHAR)
		tmp = static_cast<float>(this->OString[0]);
	else
	{
		try
		{
			tmp = std::stof(this->OString);
		}
		catch(const std::exception& e)
		{
			throw Cast::UnvalidCast();
		}
	}
	return tmp;
}

std::string const &Cast::getOSring() const 
{
	return (this->OString);
}

Cast::UnvalidCast::UnvalidCast() : _error("Impossible!")
{}

Cast::UnvalidCast::UnvalidCast(std::string err) : _error(err)
{}

Cast::UnvalidCast::~UnvalidCast() throw() 
{}

Cast::UnvalidCast::UnvalidCast(UnvalidCast const &other)
{
	*this = other;
}

Cast::UnvalidCast &Cast::UnvalidCast::operator=(UnvalidCast const &)
{
	return (*this);
}

const char *Cast::UnvalidCast::what() const throw()
{
	return _error.c_str();
}
