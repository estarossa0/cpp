#include <iostream>
#include "cast.hpp"

int		type_check(std::string str)
{
	int		index;
	int		type;

	type = CINT;
	index = 0;
	if (str.length() == 1 && std::isprint(str[0]))
		return (CCHAR);
	if (str == "nanf" || str == "-inff" || str == "+inff")
		return (CFLOAT);
	if (str == "nan" || str == "-inf" || str == "+inf")
		return (CDOUBLE);
	if (str[index] == '-')
		index++;
	else if (str[index] == '+')
		index++;
	if (std::isdigit(str[index]) == 0)
		return (0);
	while (str[index] != '.' && str[index] != '\0')
	{
		if (std::isdigit(str[index]) == 0)
			return (0);
		index++;
	}
	if (str[index] == '.')
	{
		index++;
		type = CDOUBLE;
		if (std::isdigit(str[index]) == 0)
			return (0);
	}
	while (str[index])
	{
		if (std::isdigit(str[index]) == 0)
		{
			if (str[index] == 'f' && str[index + 1] == 0)
				return (CFLOAT);
			else
				return (0);
		}
		index++;
	}
	return (type);
}

/* int main()
{
	

try
{
	tmp = std::stof(str);
	std::cout << tmp;
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}
} */

int main(int argc, char **argv)
{
	int	type;

	if (argc == 2 && (type = type_check(argv[1])) != 0)
	{
		Cast cast(argv[1], type);
		try
		{
			std::cout << "int: " << static_cast<int>(cast);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		std::cout << "char: ";
		std::cout << "double: ";
		std::cout << "float: ";

	}
	else
	{
		std::cerr << "Unvalid argumenst\n";
	}
}
