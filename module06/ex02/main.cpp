#include "main.hpp"

Base * generate(void)
{
	srand(time(0));
	int i = rand() % 3;
	if (i == 0)
		return (new A);
	else if (i == 1)
		return (new B);
	else
		return (new C);
}

void identify_from_pointer(Base *p)
{
	std::cout << "From pointer it's a: ";
	if (dynamic_cast<A *>(p))
		std::cout << 'A' << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << 'B' << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << 'C' << std::endl;
}

void identify_from_reference( Base &p)
{
	std::cout << "From reference it's a: ";
	if (dynamic_cast<A *>(&p))
		std::cout << 'A' << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << 'B' << std::endl;
	else if (dynamic_cast<C *>(&p))
		std::cout << 'C' << std::endl;
}
int main()
{
	Base *save = generate();
	identify_from_pointer(save);
	identify_from_reference(*save);
}
