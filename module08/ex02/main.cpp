#include "mutantstack.hpp"

int main()
{
	MutantStack<int>	mstackcopy;

	for (int i=0; i < 20; i++) {
		mstackcopy.push(i);
	}

	MutantStack<int>	mstack(mstackcopy);

	std::cout << "Stack Top: " << mstack.top() << std::endl;
	std::cout << "Stack Size: " << mstack.size() << std::endl << std::endl;

	std::cout << "From start to end :" << std::endl;
	for (MutantStack<int>::iterator it=mstack.begin(); it != mstack.end(); it++) {
		std::cout << *it << std::endl;
	}

	std::cout << std::endl << "From end to start: " << std::endl;
	MutantStack<int>::iterator it=mstack.end();
	do
	{
		it--;
		std::cout << *it << std::endl;
	} while (it != mstack.begin());

}