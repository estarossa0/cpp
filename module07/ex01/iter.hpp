#pragma once

#include <iostream>

template<typename T>
void iter(T *arr, size_t l, void (*foo)(T const &))
{
	size_t index = 0;
	while (index < l)
	{
		foo(arr[index]);
		index++;
	}
}
