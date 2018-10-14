#include "Logger.h"

Logger::Logger() :
	_loggerStrategy(_default)
{
	
}

void Logger::set_strategy(LoggerStrategy* strategy)
{
	_loggerStrategy = *strategy;
}

void Logger::log_message(const std::string & message)
{
	_loggerStrategy.write(message);
}
