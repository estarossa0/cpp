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
	try
	{
		tmp = std::stoi(this->OString);
	}
	catch (const std::exception &D)
	{
		throw (Cast::UnvalidCast());
	}
	return (tmp);
}

std::string const &Cast::getOSring() const 
{
	return (this->OString);
}

Cast::UnvalidCast::UnvalidCast() : _error("Cast fail")
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
