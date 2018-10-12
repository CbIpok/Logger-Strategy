#pragma once
#include "../LoggerStrategy.h" 
namespace logstrategy
{
	class ConsolLogger final : public LoggerStrategy
	{
	public:
		virtual ~ConsolLogger() = default;
		virtual void write(const std::string &message);
	private:

	};

}