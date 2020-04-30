#include "Logger.hpp"

Logger::Logger(std::string str)
{
	file_name = str;
}

// Logger::~Logger()
// {

// }

void
Logger::logToConsole(std::string const &str)
{
	std::cout << str << std::endl;
}

void
Logger::logToFile(std::string const &str)
{
	file.open(file_name, std::fstream::app);
	if (!file.is_open())
	{
		std::cout << strerror(errno) << std::endl;
		exit(errno);
	}
	file << str << std::endl;
	file.close();
}

std::string
Logger::makeLogEntry(std::string const &str)
{
	time_t now = time(0);
	std::string current = ctime(&now);
	current.erase(current.end() - 1);
	current += ": " + str;
	return current;
}

void
Logger::log(std::string const & dest, std::string const & message)
{
	void(Logger::*ptr[2])(std::string const &) = {&Logger::logToConsole, &Logger::logToFile};
	std::string funcs[2] = {"logToConsole", "logToFile"};
	for (size_t i = 0; i < 2; i++)
	{
		if (funcs[i] == dest)
		{
			std::string log = makeLogEntry(message);
			(this->*(ptr[i]))(log);
			break;
		}
	}
}
