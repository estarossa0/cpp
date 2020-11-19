#pragma once

#include <iostream>
template <typename T>
class Array
{
private:
	size_t _lenght;
	T *_data;
public:
	Array() {};
	Array(unsigned int);
	Array(Array const &other);
	Array &operator=(Array const &other);
	T &operator[](unsigned int index);
	~Array();

	unsigned int size();
};
