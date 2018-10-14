#pragma once
#include "../LoggerStrategy.h" 


class ConsolLogger final : public LoggerStrategy
{
public:
	virtual ~ConsolLogger() = default;
	virtual void write(const std::string &message) override;
private:

};
