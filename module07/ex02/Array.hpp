#pragma once

#include <iostream>
template <typename T>
class Array
{
private:
	size_t _lenght;
	T *_data;
public:
	Array() : _lenght(0), _data(0)
	{}

	Array(unsigned int n) : _lenght(n)
	{
		_data = new T[n];
	}

	Array(Array const &other)
	{
		*this = other;
	}

	Array &operator=(Array const &other)
	{
		delete [] this->_data;
		this->_data = new T[other.size()]();
		this->_lenght = other.size();
		for (size_t i = 0; i < this->_lenght; i++)
		{
			_data[i] = other[i];
		}
		return *this;
	}

	T &operator[](unsigned int index)
	{
		if (index < 0 || index >= _lenght || _lenght == 0)
			throw Array::OutOfBoundException();
		return _data[index];
	}

	~Array()
	{
		delete []_data;
	}

	unsigned int size()
	{
		return _lenght;
	}
	class	OutOfBoundException : public std::exception
	{
		private:
			std::string	const _error;
		public:
			OutOfBoundException() : _error("Index out of bounds exception") {}
			OutOfBoundException(std::string err): _error(err) {}
			virtual ~OutOfBoundException() throw(){}

			virtual const char *what() const throw()
			{
				return "Index out of bounds exception";
			}
	};
};
