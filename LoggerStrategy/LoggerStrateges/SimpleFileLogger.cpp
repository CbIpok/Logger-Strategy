#include "SimpleFileLogger.h"
#include <ctime>

SimpleFileLogger::SimpleFileLogger(const std::string & fileName)
{
	_logFile.open(fileName, std::ofstream::app);
	if (!_logFile.is_open())
	{
		throw(std::ios_base::failure("can not open file " + fileName));
	}
	
}

void SimpleFileLogger::write(const std::string & message)
{
	
	if (!_logFile.is_open())
	{
		throw(std::ios_base::failure("can not open file "));
	}
	_logFile << "simple";
	//_logFile <<  message << std::endl;
}
