#pragma once
#include <string>
#include "LoggerStrategy.h"
#include "LoggerStrateges/ConsoleLogger.h"
#include "LoggerStrateges/SimpleFileLogger.h"
#include "LoggerStrateges/TimedFileLogger.h"

// ConsoleLoger stategy default
class Logger {
public:
	
	Logger();
	void set_strategy(LoggerStrategy* strategy);
	
	void log_message(const std::string &message);
private:

	LoggerStrategy* _loggerStrategy;
	ConsolLogger* _default;

};