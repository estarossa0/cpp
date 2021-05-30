#pragma once

#include <iostream>
#include <vector>

class Span
{
private:
	std::vector<int> _data;
	unsigned int	_size;

	Span();
public:
	Span(unsigned int n);
	virtual ~Span();
	Span(Span const &other);
	Span &operator=(Span const &other);

	void	addNumber(int item);
	void	addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);
	int		shortestSpan();
	int		longestSpan();

	unsigned int	getN();
	unsigned int	getSize();
	class	SpanError : public std::exception
	{
	private:
		std::string	const _error;
	public:
		SpanError();
		SpanError(std::string err);
		virtual ~SpanError() throw();

		virtual const char *what() const throw();
	};
};
