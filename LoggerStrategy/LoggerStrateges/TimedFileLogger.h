#pragma once
#include "../LoggerStrategy.h"
namespace logstrategy
{
	class TimedFileLogger final : public LoggerStrategy
	{
	public:
		virtual ~TimedFileLogger() = default;
		virtual void write(const std::string &message);

	private:
	};

}
