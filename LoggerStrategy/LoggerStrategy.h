#pragma once
#include <string>

class LoggerStrategy {
public:
	std::string DEBUG_FLAG = "UNSPESIALIZED";
	virtual void write(const std::string &message) = 0;///
};