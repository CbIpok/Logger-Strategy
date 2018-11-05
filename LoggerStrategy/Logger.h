#pragma once
#include <string>
#include "LoggerStrategy.h"
#include "LoggerStrateges/ConsoleLogger.h"
#include "LoggerStrateges/SimpleFileLogger.h"
#include "LoggerStrateges/TimedFileLogger.h"

// ConsoleLoger stategy default
class Logger {//<< operator
public:
	
	Logger();
	void set_strategy(LoggerStrategy* strategy);
	void log_message(const std::string &message);
	
	Logger& operator << ( const std::string& string);
private:

	LoggerStrategy* _loggerStrategy;

};