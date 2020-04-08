#include "Pony.hpp"
class pony
{
public:
	std::string desc = "Pony is cute";
	pony()
	{
		std::cout << "Pony created\n";
	}
	~pony()
	{
		std::cout << "Pony destroyed\n";
	}
};

void	ponyOnTheHeap(void)
{
	std::cout << "Pony creation on the heap\n";
	pony *h_pony = new pony;
	std::cout << h_pony->desc << std::endl;
	delete h_pony;
	std::cout << "Pony ceated and dstroyed on heap succesfully.\n";
}

void	ponyOnTheStack(void)
{
	{
		std::cout << "Pony creation on the stack\n";
		pony s_pony;
		std::cout << s_pony.desc << std::endl;
	}
	std::cout << "Pony ceated and dstroyed on stack succesfully.\n";
}
