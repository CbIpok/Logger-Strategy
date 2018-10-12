#include "Logger.h"

Logger::Logger():
	_loggerStrategy(logstrategy::ConsolLogger())
{

}

void Logger::set_strategy(LoggerStrategy & strategy)
{
	_loggerStrategy = strategy;
}
