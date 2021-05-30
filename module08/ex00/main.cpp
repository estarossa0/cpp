#include "easyfind.hpp"
#include <vector>
#include <stack>
#include <iostream>
#include <list>
int main()
{
	{
		std::cout << "list: ";
		std::list<int> lst;
		lst.push_front(1);
		lst.push_front(2);
		lst.push_front(3);
		std::list<int>::iterator it = easyfind(lst, 2);
		if (it == lst.end())
			std::cout << "Not found\n";
		else
			std::cout << *it << std::endl;
	}
	{
		std::cout << "vector: ";
		std::vector<int> vec;
		vec.push_back(1);
		vec.push_back(2);
		vec.push_back(3);
		std::vector<int>::iterator it = easyfind(vec, 4);
		if (it == vec.end())
			std::cout << "Not found\n";
		else
			std::cout << *it << std::endl;
	}
}