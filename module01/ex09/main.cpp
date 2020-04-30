#include "Logger.hpp"

int
main()
{
	Logger log("file");
	log.log("logToFile", "hey");
	log.log("logToConsole", "hey");
}
