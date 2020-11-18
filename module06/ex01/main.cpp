#include "data.hpp"

void* serialize(void)
{
	srand(time(0));
	char str[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	void *tmp = new char[20];
	char *ch = reinterpret_cast<char *>(tmp);
	for (int i = 0; i < 8; i++)
	{
		*ch = str[rand() % 62];
		ch++;
	}
	int *p = reinterpret_cast<int *>(ch);
	*p = rand();
	p++;
	ch = reinterpret_cast<char *>(p);
	for (int i = 0; i < 8; i++)
	{
		*ch = str[rand() % 62];
		ch++;
	}
	return tmp;
}

Data *deserialize(void *raw)
{
	Data *tmp = new Data;
	char *ch = reinterpret_cast<char *>(raw);
	tmp->s1  = std::string(ch, 8);
	ch += 8;
	int *p = reinterpret_cast<int *>(ch);
	tmp ->n = *p;
	p++;
	ch = reinterpret_cast<char *>(p);
	tmp->s2  = std::string(ch, 8);
	return tmp;
}

int main()
{
	void *ptr;
	Data *D_ptr;

	ptr = serialize();
	D_ptr = deserialize(ptr);
	std::cout << D_ptr->s1 <<std::endl;
	std::cout << D_ptr->n <<std::endl;
	std::cout << D_ptr->s2 <<std::endl;
	std::string str;
}
