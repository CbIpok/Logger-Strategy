#include "Logger.h"

Logger::Logger() 
{
	_loggerStrategy = nullptr;
}

void Logger::set_strategy(LoggerStrategy* strategy)
{
	_loggerStrategy = strategy;
}



void Logger::log_message(const std::string & message)
{
	if (_loggerStrategy!= nullptr)
		_loggerStrategy->write(message);
}

Logger& Logger::operator<<(const std::string & string)
{
	log_message(string);
	return *this;
}
