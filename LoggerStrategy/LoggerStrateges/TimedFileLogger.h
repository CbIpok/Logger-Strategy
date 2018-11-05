#pragma once
#include "../LoggerStrategy.h"
#include <fstream>
#include <string>

class TimedFileLogger final : public LoggerStrategy
{
public:
	TimedFileLogger(const std::string& fileName = "TimedFileLogger.log");
	virtual ~TimedFileLogger();
	virtual void write(const std::string &message) override;

private:
	std::ofstream _logFile;
};


