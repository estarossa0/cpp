#include "span.hpp"
#include <vector>
#include <iostream>
int main()
{
	std::vector<int> vec;
	srand(clock());
	for (size_t i = 0; i < 100; i++)
	{
		vec.push_back(i);
	}
	try
	{
		Span sp = Span(5);
		// std::cout << sp.shortestSpan() << std::endl;
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		sp.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span sp = Span(100);
		sp.addNumber(vec.begin(), vec.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


}