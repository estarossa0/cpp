#include "span.hpp"

Span::Span(){}

Span::Span(unsigned int n) : _size(n) {}

Span::~Span()
{
}

Span &Span::operator=(Span const &other)
{
	_data.clear();
	this->_data = other._data;
	this->_size = other._size;
	return *this;
}

void Span::addNumber(int item)
{
	if (_data.size() < _size) {
		this->_data.push_back(item);
	}
	else
	{
		throw	Span::SpanError("max size already!");
	}
}

void	Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	while (first != last){
		this->addNumber(*first);
		first++;
	}
}

int Span::longestSpan()
{
	int		max, min;

	if (_data.size() < 2)
		throw Span::SpanError("Size too small!");
	max = _data[0];
	min = _data[0];
	for (std::vector<int>::iterator it = _data.begin(); it != _data.end() ; it++)
	{
		if (*it < min)
			min = *it;
		if (*it > max)
			max = *it;
	}
	return (abs(max - min));
}

int Span::shortestSpan()
{
	int		max, min;
	std::vector<int>::iterator save;

	if (_data.size() < 2)
		throw Span::SpanError("Size too small!");
	max = _data[0];
	min = _data[0];
	save = _data.begin();
	for (std::vector<int>::iterator it = _data.begin(); it != _data.end() ; it++)
	{
		if (*it < min)
		{
			min = *it;
			save = it;
		}
	}
	if (save == _data.begin())
		max = _data[1];
	for (std::vector<int>::iterator it = _data.begin(); it != _data.end() ; it++)
	{
		if (*it < max && it != save)
		{
			max = *it;
		}
	}
	return (abs(max - min));
}

Span::SpanError::SpanError() : _error("ERROR") {}

Span::SpanError::SpanError(std::string err) : _error(err) {}

Span::SpanError::~SpanError() throw() {};

const char *Span::SpanError::what() const throw()
{
	return _error.c_str();
}