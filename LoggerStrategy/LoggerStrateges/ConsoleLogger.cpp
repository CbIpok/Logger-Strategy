#include "ConsoleLogger.h"
#include <string>
#include <iostream>

void ConsolLogger::write(const std::string & message)
{
	std::cout << message<<std::endl;
}
