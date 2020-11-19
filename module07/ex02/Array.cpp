#include "Array.hpp"

template <typename T> unsigned int Array<T>::size()
{
	return _lenght;
}

template <typename T> Array<T>::Array() : _lenght(0), _data(0)
{}

template <typename T> Array<T>::Array(unsigned int n) : _lenght(0)
{
	_data = new T[n];
}

template <typename T> Array<T>::Array(Array<T> const &other)
{
	*this = other;
}

template <typename T> Array<T> &Array<T>::operator=(Array<T> const &other)
{
	delete [] this->_data;
	this->_data = new T[other.size()]();
	this->_lenght = other.size();
	return *this;
}

template <typename T> T &Array<T>::operator[](unsigned int index)
{
	if (index < 0 || index >= _lenght)
		throw std::exception;
	return _data[index];
}

template <typename T> Array<T>::~Array()
{
	delete []_data;
}
