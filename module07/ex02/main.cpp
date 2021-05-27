#include <iostream>
#include "Array.hpp"

int main()
{
	Array<int> array1;
	Array<char> array2(5);

	std::cout << "Array1:\n";
	for (size_t i = 0; i < array1.size(); i++)
	{
		array1[i] = i;
		std::cout << array1[i] << " ";
	}


	std::cout << std::endl << "Array2:\n";
	for (size_t i = 0; i < array2.size(); i++)
	{
		array2[i] = i + 'a';
		std::cout << array2[i] << " ";
	}


	std::cout << std::endl;
	try
	{
		array1[0] = 2;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		array2[999] = 2;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}