#pragma once
#include <string>

class LoggerStrategy {
public:
	virtual void write(const std::string &message) = 0;///
};