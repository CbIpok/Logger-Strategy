#include "Logger.h"

int main()
{
	Logger log;
	log.log_message("console");
	SimpleFileLogger lf;
	log.set_strategy(&lf);
	log.log_message("simple file");
	TimedFileLogger tfl;
	log.set_strategy(&tfl);
	log.log_message("timed file");

}