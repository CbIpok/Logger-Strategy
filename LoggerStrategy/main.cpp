#include "Logger.h"

int main()
{
	Logger log;
	log.log_message("console");
	SimpleFileLogger lf;
	log.set_strategy(&lf);
	//log.set_strategy(&logs);
	//log.log_message("simple file");
	//log.set_strategy(log);
	//log.log_message("timed file");

}