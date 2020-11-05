#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>
#include <stdlib.h>
#define vibe_check write(1, "v", 1);
#define NONE 0
#define ADD 1
#define SEARCH 2
#define LOG std::cout <<
#define LINE std::endl


class	contact
{
	public:
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		login;
	std::string		postal_address;
	std::string		email_adress;
	std::string		phone_number;
	std::string		birthday_date;
	std::string		favorite_meal;
	std::string		underwear_color;
	std::string		darkest_secret;
	void	add();
	void	display();
	void	full_display();
};
void	display(std::string);
void	add(std::vector<contact> &stack, char &mode);
void	list(std::vector<contact> &stack);
