#pragma once
#include "../LoggerStrategy.h"
#include <fstream>
#include <string>


	class SimpleFileLogger final: public LoggerStrategy
 	{
	public:
		SimpleFileLogger(const std::string& fileName = "SimpleFileLog.log"); 

		virtual ~SimpleFileLogger() = default;
		virtual void write(const std::string &message) override;
	private:
		std::ofstream _logFile;
	};


