#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <string.h>
#include <ctime>

class Logger
{
private:
	std::string		file_name;
	void 			logToConsole(std::string const &str);
	void			logToFile(std::string const &str);
	std::string		makeLogEntry(std::string const &str);
	std::ofstream file;
public:
	Logger(std::string);
	void			log(std::string const & dest, std::string const & message);
};
