#include "phone-ing.hpp"

void
contact::add()
{
	std::cout << "Write first name: ";
	getline(std::cin, first_name);
	std::cout << "Write last name: ";
	getline(std::cin, last_name);
	std::cout << "Write nickname: ";
	getline(std::cin, nickname);
	std::cout << "Write login: ";
	getline(std::cin, login);
	std::cout << "Write postal address: ";
	getline(std::cin, postal_address);
	std::cout << "Write email adress: ";
	getline(std::cin, email_adress);
	std::cout << "Write phone number: ";
	getline(std::cin, phone_number);
	std::cout << "Write birthday date: ";
	getline(std::cin, birthday_date);
	std::cout << "Write favorite meal: ";
	getline(std::cin, favorite_meal);
	std::cout << "Write underwear color: ";
	getline(std::cin, underwear_color);
	std::cout << "Write darkest secret: ";
	getline(std::cin, darkest_secret);
}

void
display(std::string str)
{
	int	index = 0;
	while (str[index] && index < 10)
		LOG str[index++];
	if (index < (int)str.size())
	{
		LOG "\b.";
	}
	else
		while (index++ < 10)
			LOG " ";
}

void
contact::display()
{
	LOG "|";
	::display(first_name);
	LOG "|";
	::display(last_name);
	LOG "|";
	::display(nickname);
}

void
contact::full_display()
{
	std::cout << "first name: ";
	LOG first_name << LINE;
	std::cout << "last name: ";
	LOG last_name << LINE;
	std::cout << "nickname: ";
	LOG nickname << LINE;
	std::cout << "login: ";
	LOG login << LINE;
	std::cout << "postal address: ";
	LOG postal_address << LINE;
	std::cout << "email adress: ";
	LOG email_adress << LINE;
	std::cout << "phone number: ";
	LOG phone_number << LINE;
	std::cout << "birthday date: ";
	LOG birthday_date << LINE;
	std::cout << "favorite meal: ";
	LOG favorite_meal << LINE;
	std::cout << "underwear color: ";
	LOG underwear_color << LINE;
	std::cout << "darkest secret: ";
	LOG darkest_secret << LINE;
}
