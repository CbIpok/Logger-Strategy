#pragma once
#include "../LoggerStrategy.h"
namespace logstrategy
{
	class SimpleFileLogger final: public LoggerStrategy
 	{
	public:

		virtual ~SimpleFileLogger() = default;
		virtual void write(const std::string &message);
	private:

	};

}
