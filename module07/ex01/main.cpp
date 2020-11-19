#include "iter.hpp"

template<typename V>
void func(V const &item)
{
	std::cout << item << std::endl;
}
int	main()
{
	int integers[] = { 1, 2, 3, 4, 5, 6};
	std::string str[] = { "1", "2", "3" };

	::iter(integers, 6, func);
	std::cout << std::endl;
	::iter(str, 3, func);
}
