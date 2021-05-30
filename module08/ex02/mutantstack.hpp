#pragma once

#include <iostream>
#include <stack>


template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	virtual ~MutantStack();
	MutantStack &operator=(MutantStack const &other);
	MutantStack(MutantStack const &other);

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin();
	iterator end();
};

template <typename T>
MutantStack<T>::MutantStack()
{}

template <typename T>
MutantStack<T>::~MutantStack()
{}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &other) : std::stack<T>(other)
{

}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack<T> const& other)
{

	if (this != &other)
	{
		std::stack<T>::operator=(other);
	}
	return *this;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}