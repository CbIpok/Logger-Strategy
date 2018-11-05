#include "TimedFileLogger.h"
#include <ctime>

TimedFileLogger::TimedFileLogger(const std::string & fileName)
{
	_logFile.open(fileName, std::ofstream::app);
	if (!_logFile.is_open())
	{
		throw(std::ios_base::failure("can not open file " + fileName));
	}
}

TimedFileLogger::~TimedFileLogger()
{
}

void TimedFileLogger::write(const std::string & message)
{
	std::time_t result = std::time(nullptr);
	_logFile << std::asctime(std::localtime(&result)) << " " << message << std::endl;
}
