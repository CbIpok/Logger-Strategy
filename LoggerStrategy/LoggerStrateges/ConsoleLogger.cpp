#include "ConsoleLogger.h"
#include <string>
#include <iostream>

void logstrategy::ConsolLogger::write(const std::string & message)
{
	std::cout << message;
}
